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
    // INVALID ---> simple.... you must declare a variable before use or else its invalid
/*
    int oldAge = 22;
    int newAge = oldAge + years;
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
    // Left to Right ---> WE have to follow Left to right rule 
    int New1 = 4 * 3 / 6 * 2;
    printf("\n %d", New1);
    // Ans is 4

    // Control Instruction

    // Used to Determine flow of program 
    // ---> Sequence Control   
    // ---> Decision Control |if-else|
    // ---> Loop Control |For-loop / while-loop|
    // ---> Case Control



    return 0;
}