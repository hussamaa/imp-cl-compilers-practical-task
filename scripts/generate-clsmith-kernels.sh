#!/bin/bash
# 
# Multiple OpenCL Kernel Generation using CLSmith
#
# Author: Hussama Ismail <hussama.ismail@gmail.com>
#
# ------------------------------------------------------
#
# Script that invokes CLSmith and generate many OpenCL 
# kernels for compiler testing.
# 
# Usage Example:
# $ sh script <number-of-kernels> <output-folder>
# $ sh generate-clsmith-kernels 10 .
#
# ------------------------------------------------------
#
# History:
#
#  v0.1 2017-11-06, Hussama Ismail: 
#     - Initial Version
#

NUMBER_OF_KERNELS="$1"
OUTPUT_FOLDER="$2"

CLSMITH_EXECUTABLE="CLSmith"
CLSMITH_FLAGS="--fake_divergence --group_divergence --vectors --inter_thread_comm --atomics --atomic_reductions"

KERNEL_PREFIX="kernel"
KERNEL_SUFFIX=".c"

mkdir -p $OUTPUT_FOLDER
for counter in `seq 0 $((NUMBER_OF_KERNELS-1))`
do
  current_kernel_file="$KERNEL_PREFIX-$counter$KERNEL_SUFFIX"
  $($CLSMITH_EXECUTABLE $CLSMITH_FLAGS)
  mv CLProg.c $OUTPUT_FOLDER/$current_kernel_file
done

rm -rf platform.info
