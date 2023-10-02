## File I/O
File handling in c this will be the bed rock of all other advanced tasks like creating your own simple shell.
<br>
Here i will be handling both read and write system call commands.
### Tips and Tricks :coffee
All of the POSIX defined macros hold an integer value which you can retrieve and see using `printf("%d", POSIX_MACROS);`
Most i used in this task.
**oflags**
>> O_RONLY -> value 0
>> O_WRONLY -> value 1                  bitwise `|` will be used mostly while using this operations
>> O_RDWRONLY -> value 2
>> O_APPEND -> value 512
>> O_TRUNC -> value 1024
>> O_CREAT -> value 64
_a little bit advanced_
>> O_EXCL -> exclusive only create a file when it does not exist
With this you are able to play around with bitwise operations which you can refer from the `0x14-Bitmanipulation folder`
<br>
