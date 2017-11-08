# Finding bugs in OpenCL compilers

This project is part of a practical task about finding bugs in OpenCL compilers, which uses the tools: [CSmith](https://github.com/csmith-project/csmith), [CLSmith](https://github.com/ChrisLidbury/CLSmith), and [clreduce](https://github.com/mpflanzer/clreduce) for this purpose. These tools are responsible for random kernel generation, kernel execution, and program minimization. Furthermore, additional scripts written in shell were created in order to help in the result evaluation.

###### The scripts include:

* `generate-clsmith-kernels.sh` a script for multiple OpenCL kernel generation using CLSmith;
* `run-clsmith-kernels.sh` a script for running all CLSMith kernels inside a folder;
* `evaluate-results.sh` a script for evaluating all log files generated.

###### Experimental Evaluation:

For this practical task, 1000 kernels were generated using CLSmith and then compiled and executed with and without optimizations (a total of 2000 different test cases). These experiments were conducted on an otherwise idle Intel Core i7-3517U CPU @ 1.90GHz processor, with 8GB of RAM, running Ubuntu 17.10 x86-64. In addition, an Intel SDK v1.2 was used in order to run OpenCL kernels on CPU. Moreover, the benchmarks that took more than 60 seconds were considered **timeout**.
