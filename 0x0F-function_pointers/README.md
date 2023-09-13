## Function Pointers
Why not!, man c just has a way to make you learn so many different strategies you can use to approach a given problem no matter what.
A function pointer is just a pointer pointing to a chunk of memory address that contains code instructions or also some call them as function frames memory block.
In this directory will discuss more about function pointers and all the different approaches you can use with function pointers.
Have fun looking around the directory and hopefully you will find this useful. Good luck.
#### Tips and Tricks
1. To shorten the burden of writing a long confusing function pointer as an argument, use this instead.
```
    typedef (*function_ptr)(datatypes);

    /* prop */
    int function(datatype x, function_ptr fptr)
    {
        /* your code goes here */
    }
```
2. All function which return a pointer and you want to handle edge cases or errors always make sure to `return (NULL);` to avoid compiler complication.


### 
AUTHOR: [MK-0-wan](https://github.com/alx-low_level_programming/0x0F-function_pointers)
