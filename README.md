# Finding bugs in OpenCL compilers

This project is part of a practical task about finding bugs in OpenCL compilers, which uses the tools: [CSmith](https://github.com/csmith-project/csmith), [CLSmith](https://github.com/ChrisLidbury/CLSmith), and [clreduce](https://github.com/mpflanzer/clreduce) for this purpose. These tools are responsible for random kernel generation, kernel execution, and program minimization. Furthemore, additional scripts written in shell were created in order to help in the result evaluation.

###### The scripts include:

* `generate-clsmith-kernels.sh` a script for multiple OpenCL kernel generation using CLSmith;
* `run-clsmith-kernels.sh` a script for running all CLSMith kernels inside a folder;
* `evaluate-results.sh` a script for evaluating all log files generated.

