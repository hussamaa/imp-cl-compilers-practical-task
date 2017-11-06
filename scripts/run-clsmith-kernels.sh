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

KERNEL_PATTERN=$(echo "$KERNEL_FOLDER/*$KERNEL_SUFFIX" | sed -e "s/\/\//\//g")
rm -rf $KERNEL_FOLDER/*.log
for kernel in $KERNEL_PATTERN; do
  kernel_file=$(echo $kernel | sed -e "s/.c//g")
  echo "checking kernel: $kernel"
  echo "* with optimizations: "
  $($CL_LAUNCHER_EXECUTABLE $CL_LAUNCHER_FLAGS -f $kernel > "$kernel_file.optimized.log")
  
  # execute a non-optimized version
  if $CHECK_WITHOUT_OPTIMIZATION ; then
    echo "* without optimizations: "
    $($CL_LAUNCHER_EXECUTABLE $CL_LAUNCHER_FLAGS $CL_LAUNCHER_DISABLE_OPTIMIZATION -f $kernel > "$kernel_file.non-optimized.log")
  fi
  echo ""
done 
