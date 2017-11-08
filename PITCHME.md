---

## Finding bugs in OpenCL compilers

<br> 

Hussama Ismail 
<hussama.ismail@gmail.com>

---

### Bugs in OpenCL compilers?
<br> 
* **Yes, they do exist**. This work was already done before by Alastair Donaldson and his Ph.D. students;

* Execute the **same approach** trying to find bugs in **mainstream compilers**.

---

### Tools
<br> 
* **CSmith**: random generator of C programs;
<br> 
* **CLSmith**: a random generator of OpenCL C programs;
<br> 
* **clreduce**: automate reducer for OpenCL.

+++

### Scripts
<br> 
1. **generate-clsmith-kernels.sh**: a script for multiple OpenCL kernel generation using CLSmith;
<br> 
2. **run-clsmith-kernels.sh**: a script for running all CLSMith kernels inside a folder;
<br> 
3. **evaluate-results.sh**: a script for evaluating all log files generated.

---

### Experimental Evaluation
<br> 
 * 1000 random kernels were generated;
* compiled with and without optimization (2000 test cases);
* timeout of 60 seconds;
 * i7-3517U CPU @ 1.90GHz, 8GB of RAM, Ubuntu 17.10 x86-64.

The End :)
