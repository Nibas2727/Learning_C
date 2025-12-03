// Conditional Statement😎
#include<stdio.h>
int main(){
    // Conditional statement

    // 1 ---> if-else
    // Syntax
/*
    if(Condition){
        to do something
    }
    else {
        to do something         //Else is not compulsory
    }
*/

// simple if-else program 

    int age;
    printf("Enter Age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nYou can drive");
    } else{
        printf("\nYou can not drive");
    }

    printf("\nThank you");

// Introduction to else if

int mark;
    printf("\nEnter Mark : ");
    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("\n1st Devision");
    }
    else if (mark >= 80)    
    {
        printf("\n2nd Devison");
    }
    else if (mark >=70)
    {
        printf("\n3rd Devison");
    }
    
    else{
        printf("\n4th Devison");
    }

    printf("\nThank you");

    // Conditional Operators
    // Ternary Operator(CP_2)

    // Condtion ? "doSomething if TRUE": "doSomething if FALSE";
    age < 24 ? printf("\nYou can not marry") : printf("\nYou can marry");

// -------------------------------------------------------------------------------

    // 2 ---> Switch
    // Syntax
/*
    switch(number){
    case C1: //do something
        break;
    case C2: //do something
        break;
    default: //do something
    }
*/

    // We can only use number or character in swtich statement
    // simple switch program to print days of week 

    int day; //1-mon; 2-tues; 3-wed; ......; 7-sun;
    printf("\nEnter day(1-7)");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\nMonday");
        break;
    case 2:
        printf("\nTuesday");
        break;
    case 3:
        printf("\nWednesday");
        break;
    case 4:
        printf("\nThursday");
        break;
    case 5:
        printf("\nFriday");
        break;
    case 6:
        printf("\nSaturday");
        break;
    case 7:
        printf("\nSunday");
        break;
    default:
        printf(":Enter no between(1 to 7)");
        break;
    }
    // Break statemnt is necessary or else vo jidhar statement true hoga udhar se sab cases execute kardega
    // Cases can be in any order
    // Nested swtich (switch inside switch) are allowed

    // Nested if ---> if statement insdie if 
    int num1;
    printf("\nEnter a no");
    scanf("%d",&num1);
    if (num1> 9 && num1 < 100){
        if(num1 % 2 == 0){
             printf("\nThis 2 digit no is divisible by 2");
        } else{
            printf("\nnot divisible by 2");
        }   
    } else{
        printf("\nNot a 2 digit no");
    }
    return 0;
}
