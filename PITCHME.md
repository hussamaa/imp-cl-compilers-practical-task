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

* **CLSmith**: a random generator of OpenCL C programs (based on CSmith); 
* **clreduce**: automate reducer for OpenCL (based on creduce).

+++

### Auxiliary Scripts 

<br> 

1. **generate-clsmith-kernels.sh**: a script for multiple OpenCL kernel generation using CLSmith;
2. **run-clsmith-kernels.sh**: a script for running all CLSMith kernels inside a folder;
3. **evaluate-results.sh**: a script for evaluating all log files generated.

---

### Experimental Evaluation 

<br> 

* **500** random kernels were generated;
* compiled (i) **with** and (ii) **without** optimization (1000 test cases);
* timeout of 60 seconds;
* CPU i7-3517U @ 1.90GHz, 8GB, Ubuntu 17.10 x86-64;
* Intel OpenCL SDK v1.2.

+++

### i) with optimizations:

<br> 

* total of kernels: **500**;
* **56** timeouts (**11**%);
* **283** executions without problems (**57**%) 
  * (it doesn't mean that the result is correct);
* **161** failures (**32**%);
  * compiler crash: **44** *(27%)*;
  * out of resource (OpenCL): **98** *(61%)*;
  * other errors (OpenCL): **19** *(12%)*.
  
+++

### ii) without optimizations:

<br> 

* total of kernels: **500**;
* **55** timeouts (**11**%);
* **296** executions without problems (**59**%);
* **149** failures (**30**%);
  * compiler crash: **6** *(4%)*;
  * out of resource (OpenCL): **124** *(83%)*;
  * other errors (OpenCL): **19** *(13%)*.
  
+++

### Important to note:

<br> 

* **11**% of the benchmarks were timeout;
* The non-optimized set of benchmarks shown **4%** more executions without problems.
* **6%** of the optimized kernels that executed without problems produced different results if compared to their non-optimized version;

+++

### Important to note (II):

<br> 

* In general, the optimized benchmarks shown **7**% more failures;
  * The optimized benchmarks shown **86**% more failures related to **compiler crash**;
  * The non-optimized benchmarks shown **20%** more failures related to **out of resources**.

---

Thank you for your attention!
