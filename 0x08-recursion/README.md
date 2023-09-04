### RECURSION
You will need to understand the base value (i like to call it exit point).
A program that keeps on calling itself in order to get the smallest value possible.
Finding the smallest value solves the rest of the code frames found in the stack.
All memory is saved in the stack memory. Which will later on be released when the smallest value is found.

##### The Stack Memory
Think of it as a pile of dinner plates stacked together. In order for you to clean them all you will have to start with the last placed plate on the stack.
The same goes to the stack memory the last memory address **set of instructions that the CPU should perform and give a return value**  passed is the first one out.
It's also known as the **LIFO** effect last in first one out.
Now knowing this will be helpful in the case of recursion, where we are having a function calling itself[ found this interesting a snake biting its tail] again and again.
So in this case we need to give the recursive function a stopping point to prevent potential issues.
The solution to a recursive function is to look for the solution of the problem in a function smaller version of it self compared to the original.
The only potential issue a recursive function can always cause well, you guessed it a Seg-fault caused by stack-overflow.
No more memory in the stack for it to hold all the passed number of memory addresses. This is caused when the functions finds no possible solution and keeps on calling itself to infinity.
To avoid this we need to have a **base case** scenario where when the function keeps on calling itself there is a point where there is a pre-defined value deep inside the smaller version of the function.
Simpler ways to think of it. Think of a function as a robot and a function definition as a blueprint of how the robot should look like, while the robot is created in an assembly line, it is given the capability of creating another identical robot while still in the assembly line of the factory.
Now this keeps on happening again and again the only difference between the two robots is the kind of arguments passed. Crucial that this process of robot replication comes to an end so that the factory doesn't run out of resources, if not the factory will be forced to  come to a halt.
***

```c
/* this is the simplest diagram of a stack representation in the memroy visually */

		   -|-0
		  --|--1
		----|----2
	  ------|------3
	--------|--------...
```


