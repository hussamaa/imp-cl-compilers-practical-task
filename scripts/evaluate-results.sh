#!/bin/bash
# 
# Evalute results after kernel generation
#
# Author: Hussama Ismail <hussama.ismail@gmail.com>
#
# ------------------------------------------------------
#
# Script that evaluate all kernel results inside a specified 
# folder. In case of difference between an optimized and non
# optimized version, it will be shown to the user.
# 
# Usage Example:
# $ sh evaluate-results.sh <folder>
#
# ------------------------------------------------------
#
# History:
#
#  v0.1 2017-11-07, Hussama Ismail: 
#     - Initial Version
#

KERNEL_RESULTS_FOLDER="$1"

KERNEL_SUFFIX=".c"
KERNEL_RESULTS_SUFFIX=".log"

KERNEL_LIST=$(ls $KERNEL_RESULTS_FOLDER/*$KERNEL_SUFFIX | sed -e "s/\/\//\//g" | sort -V)

EVALUATE()
{
  if [ "$2" != "$3" ]; then
    echo -e "$1 - \033[33;35m[DIVERGENT]\e[0m"
  fi
}

echo "checking results in $KERNEL_RESULTS_FOLDER:" 
echo ""

counter=0
for kernel in $KERNEL_LIST; do
  kernel_file=$(echo $kernel | sed -e "s/.c//g")
  kernel_optimized_log_file="$kernel_file.optimized.log"
  kernel_non_optimized_log_file="$kernel_file.non-optimized.log"
  sha_kernel_optimized=$(sha1sum $kernel_optimized_log_file  | cut -d " " -f1)
  sha_kernel_non_optimized=$(sha1sum $kernel_non_optimized_log_file  | cut -d " " -f1)
  EVALUATE $kernel $sha_kernel_optimized $sha_kernel_non_optimized 
  counter=$((counter+1));
done 

echo ""
echo "total of results evaluated: $counter";
