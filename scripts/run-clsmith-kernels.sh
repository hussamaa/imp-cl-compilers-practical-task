#!/bin/bash
# 
# Run all CLSMith kernels inside a folder
#
# Author: Hussama Ismail <hussama.ismail@gmail.com>
#
# ------------------------------------------------------
#
# Script that runs all kernels inside a specified folder.
# In particular, it uses cl_launcher for kernel execution.
# 
# Usage Example:
# $ sh run-clsmith-kernels <folder>
#
# ------------------------------------------------------
#
# History:
#
#  v0.1 2017-11-06, Hussama Ismail: 
#     - Initial Version
#

KERNEL_FOLDER="$1"
KERNEL_SUFFIX=".c"

CL_LAUNCHER_EXECUTABLE="cl_launcher"
CL_LAUNCHER_FLAGS="-d 0 -p 0 --include_path $CLSMITH_HOME/build --include_path $CLSMITH_HOME/runtime/"
CL_LAUNCHER_DISABLE_OPTIMIZATION_FLAG="---disable_opts"

CHECK_WITHOUT_OPTIMIZATION=true;
TIMEOUT=60
KERNEL_LIST=$(ls $KERNEL_FOLDER/*$KERNEL_SUFFIX | sed -e "s/\/\//\//g" | sort -V)

EVALUATE()
{
  if [[ $1 -eq 0 ]]; then
    echo -e "\033[33;32m [OK]\e[0m"
  elif [[ $1 -eq 124 ]]; then
    echo -e "\033[33;33m [TIMEOUT]\e[0m"
  else
    echo -e "\033[33;31m [FAIL]\e[0m"
  fi
}

rm -rf $KERNEL_FOLDER/*.log
for kernel in $KERNEL_LIST; do
  kernel_file=$(echo $kernel | sed -e "s/.c//g")
  kernel_optimized_log_file="$kernel_file.optimized.log"
  echo "checking kernel: $kernel"
  echo -n "* with optimizations: "
  timeout $TIMEOUT bash -c "{ $CL_LAUNCHER_EXECUTABLE $CL_LAUNCHER_FLAGS -f $kernel > $kernel_optimized_log_file; } 2>> $kernel_optimized_log_file ";
  EVALUATE $?
  
  # execute a non-optimized version
  if $CHECK_WITHOUT_OPTIMIZATION ; then
    echo -n "* without optimizations: "
    kernel_non_optimized_log_file="$kernel_file.non-optimized.log"
    timeout $TIMEOUT bash -c "{ $CL_LAUNCHER_EXECUTABLE $CL_LAUNCHER_FLAGS $CL_LAUNCHER_DISABLE_OPTIMIZATION_FLAG -f $kernel > $kernel_non_optimized_log_file; } 2>> $kernel_non_optimized_log_file ";
    EVALUATE $?
  fi
  echo ""
done 
