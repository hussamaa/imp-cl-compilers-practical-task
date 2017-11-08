---

## Finding bugs in OpenCL compilers

<br/> 

Hussama Ismail 
<hussama.ismail@gmail.com>

---

### Bugs in OpenCL compilers?

* Yes, they exist. This work was already done before by Alastair Donaldson and his Ph.D. students;

* Execute the same approach trying to find bugs in mainstream compilers.

---

### Tools

* CSmith - random generator of C programs;
* CLSmith - a random generator of OpenCL C programs;
* clreduce - automate reducer for OpenCL.

`generate-clsmith-kernels.sh` a script for multiple OpenCL kernel generation using CLSmith;
run-clsmith-kernels.sh a script for running all CLSMith kernels inside a folder;
evaluate-results.sh a script for evaluating all log files generated.


---



The End :)
