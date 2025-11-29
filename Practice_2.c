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

    


    return 0;
}
