#include <stdio.h>

/*This function is executed before the `main()` function.*/
/*It prints a message to the console.*/

#include <stdio.h>

void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
