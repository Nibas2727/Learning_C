#include<stdio.h>
int main(){
    // 1 ---> Write a program to check if a student is passed or failed
    int marks;
    printf("Enter your marks(0-100) : ");
    scanf("%d", &marks);

//    marks> 30 ? printf("Passed") : printf("Failed"); // ---> using Ternary Operator
    if (marks>=30 && marks<100){
        printf("Pass");
    }else if(marks<30){
        printf("failed");
    } else{
        printf("Enter valid marks");
    }

    return 0;
}