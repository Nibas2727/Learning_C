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


    // 2 --->  Write a Program to give grades to a student;
    /*
    marks < 30 is c 
    30 <= marks < 70 is B
    70 <= marks < 90 is A
    90 <= marks <= 100 is A+
    */

    int markss;
    printf("\nEnter your marks: ");
    scanf("%d", &markss);

    if(markss < 30 ){
        printf("\nGrade C");
    } else if (30<=markss<70) {
        printf("\nGrade B");
    } else if (70<=markss<90) {
        printf("\nGrade B");
    } else if (90 <=markss<= 100){
        printf("\nGrade A+");
    } else {
        printf("Enter valid mark!");
    }

// Will this code :  
int x = 2;

if(x=1){
    printf("\nx is equal to 1");
} else {
    printf("\nc is not equal to 1");
}
/* ---> ANSWER is (it will show no error and output will be, x is equal to 1) 
but yes it may show us warning and the output is |x is not equal to 1| because 
in c 0 means false rather then 0 every other number means True so there |x = 1| 
the condition is true and statement executed 
*/

// 3 ---> Write a Program to find if a character entered by you is Upper case or not;

    char Upper;
    printf("\nEnter character: ");
    scanf("%s",&Upper);

    if (Upper > 'A' && Upper < 'Z'){
//      (Upper > 65 && Upper < 90) == (Upper > 'A' && Upper < 'Z')
        printf(" Upper case");
    } else if (Upper > 'a' && Upper < 'z' ){
        printf(" Lower case");
    } else{
        printf(" pecial Character");
    }
//An ASCII value is a numerical representation of a character, used by computers to encode text
    return 0;
}