## Variadic Function
This will be used to make a functions which accepts indefinite number of arguments.
This functions will help us deal with functions having indefinite number of arguments such as the likes of printf.

##### Lists of things you mustake
* `va_list` >> a list of all the indefinite number of arguments passed to the function
* `va_start` >> starting point of our indefinite list of arguments
* `va_arg` >> retrive all the arguments passed according to the datatype given
* `va_end` >> free the list of the given given arguments passed
* `va_copy` >> make a copy of the created list of arguments passed

The list will be able to allow us to make use of all the param passed and do something with it.
Just like any other list you can make pointer to point to its memory address and do all kind of stuff with it.

#### How to retrive data
After making the list and setting your starting point, lets know get our data
```c
// your code up here
for ( i = 0; i != sentinal_value; i = va_arg(ap, int))
{
  printf("List index[%d] :>> %d <<:\n", j, i);
  j++;
}
```
* simple way of grouping the retrived data and indexing it.
* notice the sentinal value which crash or stop the loop once the data retrived matches the sentinal value
much like calling a KILL SIGNAL on a process.
* in retriving datatypes of `char` and `float`s they are promoted to `int` and `double` respectively.
############ 
The ability of having the power to make a function take an undefinite number of arguments surely is a plus while using c.
Allowing you to process each type of data passed in the argument function and doing something with it.

__________________________________________________________________________________________________________________________
AUTHOR: [Mk-0-wan](https://github.com/Mk-0-wan/)
