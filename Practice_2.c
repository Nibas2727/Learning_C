// Solve :
#include<stdio.h>
int main(){
    // ---> 1
    int a = 1.999999; // To analyse weather value of a is (1/2) 
    printf("%d \n", a);

    // ---> 2
    // 5*2 - 2*3
    // 5*2 / 2*3
    // 5*(2/2)*3
    // 5+2/2*3

    int a_1 = 5*2 - 2*3;
    int a_2 = 5*2 / 2*3;
    int a_3 = 5*(2/2)*3;
    int a_4 = 5+2/2*3;

    printf("%d \n", a_1);
    printf("%d \n", a_2);
    printf("%d \n", a_3);
    printf("%d \n", a_4);

// ---> (OPERATOR)
// 3 ---> Write a program to check if a number i divisible by 2 or not

int a_5;
scanf("\n %d",&a_5);
printf("\n %d", (a_5%2)==0);

// 4 ---> write a program to check if a number is odd or even.

scanf("\n %d",&a_5);
printf("\n %d", (a_5%2)==0);

// 5 ---> Valid / Invalid
// int a = 8^8; ---> Invalid
// int x; int y = x; ---> Valid
// int x, y = x; ---> Valid
// char starts = '**'; ---> invalid

    return 0; 
}
