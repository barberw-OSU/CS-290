/* This C code contains a list of common errors/warnings when programming in C
 * and hints about how to fix them. Note that the errors herein are the
 * ones that GCC can catch. There are many subtle errors that GCC cannot detect.
 * Go to the useful links to see those.
 * Class: CS261 
 * Oregon State University
 * Some useful links:
 *http://web.msu.ac.zw/elearning/material/1239024529COMMON_C_ERRORS_-_I.pdf  
 *http://www.cems.uwe.ac.uk/~irjohnso/courses/coursenotes/uqc146/cerrors.html 
 * https://www.includehelp.com/c-programs/undefined-reference-to-main-error-in-c.aspx
*/

 

#include <stdio.h>
#include <stdlib.h>

/*        1         */
/* Error Message:
 * sampleError.c:1:18: sort.h: No such file or directory
 * Hint:
 * What do we use to include a normal header file? What do we use
 * to include a standard library?
 */
#include <sort.h>


/*        2         */
/* Warning message:
 * sampleError.c: In function `comparison':
 * sampleError.c:9: warning: suggest parentheses around assignment used as truth value
 * Hint:
 * What operator do you use to compare 2 variables?
 */
void comparison(int x) {
  if (x=5)
    printf("x is equal to 5");
}


/*        3         */
/* Warning message:
 * sampleError.c: In function `readInteger':
 * sampleError.c:24: warning: format argument is not a pointer (arg 2)
 * Hint:
 * scanf() must have the address of the variable to store input
 */
int readInteger() {
  int x;
  scanf("%d",x);
  return x;
}


/*        4         */
/* Error message:
 * sampleError.c:46: warning: implicit declaration of function `foo'
 * sampleError.c: At top level:
 * sampleError.c:49: error: conflicting types for 'foo'
 * sampleError.c:46: error: previous implicit declaration of 'foo' was here
 * Hint:
 * In ANSI C, either the prototypes or the implementation of functions
 * must be included before they are called.
 */
void callFoo() {
  foo();
}

void foo() {
  printf("Calling function foo()");
}


/*        5         */
/* Warning message:
 * sampleError.c: In function `callSwap':
 * sampleError.c:81: warning: passing arg 1 of `swap' makes pointer from integer without a cast
 * sampleError.c:81: warning: passing arg 2 of `swap' makes pointer from integer without a cast
 * Hint:
 * What should be the correct parameters when calling the function swap? Should it be integers?
 * Or should it be a pointers to integers?
 * This kind of warning messages shouldn't be ignored!!!
 */
void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void callSwap() {
  int x = 3, y = 4;
  swap(x,y);
  printf("The value of x and y after swapping are %d and %d",x,y);
}


/*        6         */
/* Error message:
 * sampleError.c: In function `printfMyString':
 * sampleError.c:97: error: missing terminating " character
 * sampleError.c:98: error: syntax error before '}' token
 * Hint:
 * Check to see if all the balanced number of quotation marks.
 */
void printfMyString() {
  printf("My string is a silly string\");
}



/*        7         */
/* Error message:
 * sampleError.c: In function `myLocalVar':
 * sampleError.c:113: error: `x' undeclared (first use in this function)
 * sampleError.c:113: error: (Each undeclared identifier is reported only once
 * sampleError.c:113: error: for each function it appears in.)
 * sampleError.c:115: warning: unused variable `x'
 * Hint:
 * In C, variables have to be declared before being used.
 */
void myLocalVar() {
  x = 5;
  printf("x=%d",x);
  int x;
}


/*        8         */
/* Warning message:
 * sampleError.c: In function `printADouble':
 * sampleError.c:131: warning: double format, different type arg (arg 2)
 * NOTE: In fact, this function doesn't produce correct output.
 * Hint:
 * What is the type of the paramter being passed?
 */
void printADouble() {
  printf ("Two plus two is %f\n", 4);
}



/*        9         */
/* Warning message:
 * sampleError.c: In function `myAssert':
 * sampleError.c:146: warning: implicit declaration of function `assert'
 * Hint:
 * What library do you need to call the function assert()? Note that
 * to call malloc() and free(), you need to include the stdlib.h library.
 */
void myAssert() {
  int x = 10;
  assert(x == 10);
}


int main() {
  printf("some thing");
  return 0;
}
