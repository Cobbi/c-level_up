/*
The C Preprocessor is a macro processor(allows you to define macros) that transforms your program before it is compiled.
These transformations can be the inclusion of header files, macro expansions etc.

All preprocessing directives(folders) begins with a '#' symbol. eg. #define PI 3.14; 

-- Including Header Files: #include

The #include preprocessor is used to include header files to C programs. For example,

#include <stdio.h>

Here, stdio.h is a header file. The #include preprocessor directive replaces the above line with the contents of stdio.h header file.

That's the reason why you need to use #include <stdio.h> before you can use functions like scanf() and printf().

You can also create your own header file containing function declaration and include it in your program using this preprocessor directive.

#include "my_header.h"

-----------------------------------------------------------------------------
A macro is a fragment of code that is given a name. You can define a macro in C using '#define' preprocessor directive. 

Eg for macros.
#include <stdio.h>
#define PI 3.14
int main() {
    float radius, Area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    Area = PI*radius*radius;

    printf("Area=%.2f", Area);
return 0;
}

-- Function like Macros

You can also define macros that work in a similar way as a function call. This is known as function-like macros. For example,

#define circleArea(r) (3.1415*(r)*(r))

Every time the program encounters circleArea(argument), it is replaced by (3.1415*(argument)*(argument)).


-- Conditional Compilation

In C programming, you can instruct the preprocessor whether to include a block of code or not. To do so, conditional directives can be used.

It's similar to an 'if statement' with one major difference.

The if statement is tested during the execution time to check whether a block of code should be executed or not whereas, the conditionals are used to include (or skip) a block of code in your program before execution.
Uses of Conditional

   1. Use different code depending on the machine, operating system
   2. Compile the same source file in two different programs
   3. To exclude certain code from the program but to keep it as a reference for future purposes

-- How to use conditional?

To use conditional, #ifdef, #if, #defined, #else and #elif directives are used.

*/

// Example: Mathematical Operation
#include <stdio.h>
//#include <stdlib.h>
#define Add +
#define Subtract -
#define Multiply *
#define Divide /

int main() {
    int a, b, add, sub, mul;
    float div;

    printf("Enter a, b, for all operations: ");
    scanf("%d%d", &a,&b);

    add=a Add b;
    printf("Addition of %d + %d = %d\n", a,b,add);

    sub=a Subtract b;
    printf("Subtraction of %d - %d = %d\n", a,b,sub);

    mul=a Multiply b;
    printf("Multiply of %d * %d = %d\n", a,b,mul);

    if(b>0) {
        div = ((float)a/b);
        printf("Division of %d / %d = %.3f\n", a,b,div);
    } else {
        printf("Division is Not Possible.\n");
    }
    return 0;
}



