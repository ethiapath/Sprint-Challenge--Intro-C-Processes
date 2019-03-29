**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
running - the process is running
waiting - the process is waiting for another process or resources
stopped - the process is stopped by the os
zombie  - the process is dead but hasn't been removed 

**2. What is a zombie process?**
A zombie process is a process that has exited but still has an entry
in the process table and a parent process waiting for it's exit code.


**3. How does a zombie process get created? How does one get destroyed?**
A process goes into the zombie state when it has completed execution, but 
has not yet been reaped by the host os.
It gets destroyed when the parent process can wait for it's exit code.
Or if the parent process has been terminated before the child process has 
finished it's execution it becomes an orphan process and get adopted by 
the init process.



**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
Compiled languages are able to run faster by converting all of their
instructions into machine code to be run by the computer. 
This allows them to make optimizations that wouldn't otherwise be possible 
in interpreted languages.
While interpreted languages have to deal with the overhead of converting their
instructions into machine code during runtime.
