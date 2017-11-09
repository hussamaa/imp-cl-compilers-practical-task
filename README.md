# Finding bugs in OpenCL compilers

This project is part of a practical task about finding bugs in OpenCL compilers, which uses the tools: [CLSmith](https://github.com/ChrisLidbury/CLSmith) and [clreduce](https://github.com/mpflanzer/clreduce) for this purpose. These tools are responsible for random kernel generation and execution, and program reduction. Furthermore, additional scripts written in shell script were created in order to help the execution and evaluation of the benchmarks.

##### The scripts include:

* `generate-clsmith-kernels.sh` a script for multiple OpenCL kernel generation using CLSmith;
* `run-clsmith-kernels.sh` a script for running all CLSMith kernels inside a folder;
* `evaluate-results.sh` a script for evaluating all log files generated.

##### Experimental Evaluation:

For this practical task, 500 kernels were generated using CLSmith (with flags: ...) and then compiled and executed with and without optimizations (a total of 1000 different test cases). These experiments were conducted on an otherwise idle Intel Core i7-3517U CPU @ 1.90GHz processor, with 8GB of RAM, running Ubuntu 17.10 x86-64. In addition, an Intel SDK v1.2 was used in order to run OpenCL kernels on CPU. Moreover, the benchmarks that took more than 60 seconds were considered **timeout**.

We divided the results in two categories; with optimization and without optimizations:

###### with optimizations:

* total of kernels: *500*
* **56** timeouts
* **283** executions without problems (it doesn't mean that the result is correct)
* **161** failures
* * compiler crash: **44**
* * out of resource (opencl -5): **98**
* * other errors (opencl -11 and -46): **19**

###### without optimizations:

* total of kernels: **500**
* **55** timeouts
* **296** executions without problems
* **149** failures
* * compiler crash: **6**
* * out of resource (opencl -5): **124**
* * other errors (opencl -11 and -46): **19**

###### considerations:




