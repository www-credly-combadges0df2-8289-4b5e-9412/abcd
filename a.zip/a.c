4.1 Introduction to functions
FUNCTIONS
A Function is a self-contained block of statement that performs a specific task when called. A
function is also called as sub program or procedure or subroutine.
Every C Program can be thought of as a collection of these functions. Function is a set of
instructions to carry out a particular task. Function after its execution returns a single value. Generally,
the functions are classified into two types:
1. Standard functions
2. User-defined functions.
 The Standard functions are also called library functions or built-in functions.
 All standard functions, such as printf(),scanf(),sqrt(), abs(), log(), sin() etc. are provided in the
library of function.
 Most of the applications need other functions than those are not available in the software, those
are known as user-defined functions.
Advantages of functions
Several advantages of dividing the program into functions include:
1. Reduce the complexity of the program.
2. Modularity
3. Reduction in code redundancy
4. Enabling code reuse
5. Better readability.
Parts of a function
A function has the following parts:
1. Function prototype declaration.
2. Function definition.
3. Function call.
4. Actual arguments and Formal arguments.
5. The return statement.
Function Declaration
Function prototype declaration consist function return type, function name, and argument list. A function
must be declared before it is used
Syntax
return_typefunction_name(parameter_list);
parameter list: type param1,type param2,type param3, etc
Examples
double sqrt(double);
int func1();
void func2(char c);
Function Definition also known as function implementation, means composing a function.
Every Function definition consists of two Parts:
1. Header of the function,.
2. Body of the function.
Syntax
return_typefunction_name(parameter_list)
{
// Function body
}
M.Ramesh,Dept of CSE, IIIT-Nuzvid.
1PSTC
UNIT-IV
FUNCTIONS
The body of a function consists of a set of statements enclosed within braces. The return
statement is used to return the result of the computations done in the called function and/or to return the
program control back to the calling function. A function can be defined in any part of the program text or
within a library
Example:
void welcome( )
function Header
{
printf(“welcome to CSE \n”;
function body
}
Function Call
A function call has the following syntax:
<function name>(<argument list>);
Example:
sum(a,b);
4.2 Types of functions
Functions can be divided into 4 categories:
1. A function with no arguments and no return value
2. A function with no arguments and a return value
3. A function with an argument or arguments and returning no value
4. A function with arguments and returning a values
1. A function with no arguments and no return value
 Called function does not have any arguments
 Not able to get any value from the calling function
 Not returning any value
 There is no data transfer between the calling function and called function.
Example
#include<stdio.h>
void welcome();
//function prototype declaration
int main()
// calling function
{
welcome(); //function call
return 0;
}
void welcome()
//called function
{
OUTPUT
printf("Hi students..!");
Hi students..!
function body
}
2. A function with no arguments and a return value
 Does not get any value from the calling function
 Can give a return value to calling program
Example
#include <stdio.h>
int send();
int main()
M.Ramesh,Dept of CSE, IIIT-Nuzvid.
2PSTC
UNIT-IV
FUNCTIONS
{
int x;
x=send()
printf("\nYou entered : %d",x);
return 0;
}
int send()
{
int n;
printf("\nEnter a number: ");
scanf("%d",&n);
return n;
}
OUTPUT
Enter a number: 24
You entered: 24
3. A function with an argument(s) and returning no value
 A function has argument(s).
 A calling function can pass values to function called , but calling function not receive any value.
 Data is transferred from calling function to the called function but no data is transferred from the
called function to the calling function.
 Generally Output is printed in the Called function.
Example
#include<stdio.h>
void add(int x, int y);
int main()
{
add(24,18);
add(124,100);
OUTPUT
add(1224,77);
Sum of 24 and 18 is 42
return 0;;
Sum of 124 and 100 is 224
}
Sum of 1224 and 77 is 1301.
void add(int a, int b)
{
int result;
result = a+b;
printf("Sum of %d and %d is %d\n",a,b,result);
}
4. A function with arg
