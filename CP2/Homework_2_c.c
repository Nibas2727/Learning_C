#include <stdio.h>

int main()
{
    /*
      Compare two numbers and print the smaller one
      Constraints: no if/else, no loops — use only basic operators and ternary
    */

    int a, b;
     printf("Enter two integers separated by space");
     scanf("%d %d", &a, &b);

     /* Compute min without using ? or : or if/else
       Use comparisons that yield 1 or 0 and arithmetic to select value
     */
     int min = a * (a <= b) + b * (b < a);

     int eq = (a == b);
     const char *msgs[2] = {"Smaller number %d\n", "Both numbers are equal %d\n"};
     int out = a * eq + min * (1 - eq);
     printf(msgs[eq], out);
    return 0;
} 