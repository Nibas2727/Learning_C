// Instruction & Operators
#include<stdio.h>
int main(){
    // Instructions

    // Type Declaration Instruction
    
    // Declar Variable before using it
    // VALID
/*
    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e;
*/
    // INVALID ---> simple.... you must declare a variable before using or else its invalid
/*
    int oldAge = 22;
    int newAge = oldAge + (years);
    int years = 2;
    
    |Hear it's invalid because we used (years) before decalring and c excecutes line by line code|
*/
    
    // Arithmetic Instruction 
  
    // Single variable on LHS
    int a = 1, b = 2;
    int sum = a + b;
    int multiply = a * b;
    int x, y = a * b;
/* 
    VALID
    a = b + C
    a = b * c
    a = b / c
   
    INVALID
    b + c = a
    a = bc 
    a = b^c 
*/
    // pow(x,y) ---> Power function
    // Modular Operator (%) ---> gives reminder as output
    // Modular Operator works only for Interger


    // Type Conversion

    // Operator Precedence ---> (BODMAS) in real life math
/* 
    Priority of Operator in C
    *,/,%
    +,-
    =
*/
    int New = 4 + 9 * 10;
    printf("%d", New);
    // The output will be 94 not 130 Because Precedence of (*) is higher
    // First Multiplication then Addition 

    // Operation of Same precedence
    // Left to Right Approach ---> WE have to follow Left to right rule 
    int New1 = 4 * 3 / 6 * 2;
    printf("\n %d", New1);
    // Ans is 4

    // Control Instruction

    // Used to Determine flow of program 
    // ---> Sequence Control   
    // ---> Decision Control |if-else|
    // ---> Loop Control |For-loop / while-loop|
    // ---> Case Control


    // Operator

    // ---> Arithmetic Operators ---> |+, -, *, /|
    // ---> Relational Operator ---> |==, >, <, >=, <=, !=|
    // ---> Logical Operator ---> (&&, !, ||)
    // ---> Bitwise Operator 
    // ---> Assignment Operator ---> |=, +=, -=, *=, /=, %=|
    // ---> Ternary Operator
 
    // ---> Relational Operator
    // |==, >, <, >=, <=, !=|

    printf("\n %d ", 4==4);   // 1 Means |TRUE| ---> Rather then 0 everything means ture;
    printf("\n %d ", 4==5);   // 0 Means |FALSE|
    printf("\n %d ", 4>5);
    printf("\n %d ", 4<5);
    printf("\n %d ", 4>=5);
    printf("\n %d ", 4<=5);

    // ---> Logical Operator
    
    // && ---> AND
    // || ---> OR
    // ! ---< NOT ---> True ko false and False ko true banadega
    
    printf("\n %d ", 4<=5 && 4>5);   // ---> AND(&&) Operator
    printf("\n %d ", 4<=5 || 4>5);   // ---> OR(||) Operator
    printf("\n %d ", !(4 < 5));   // ---> 4 < 5 True hai but (!) usko false banadega

    // ---> Assignment Operator ---> |=, +=, -=, *=, /=, %=|
    // Shorthand Operator

    int a5 = 2,b5 = 3;
    a5 += b5 ;   // ---> a5 = a5 + b5
    // agar do same variable ho like hear = se pahle and bad mai a5 hai udahr we can make it short and use assignment operator to make ourcode short 
    printf("\n%d", a5);




    return 0;
}
