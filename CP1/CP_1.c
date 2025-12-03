//  Variable and Data types
# include<stdio.h>

int main(){
    //  Variable declaration in C

    int number = 25;
    char star = '*';
    int age = 20;
    float pi = 3.14;

    //  Rules for naming variables in C

    //  ---> Variables are CASE SENSITIVE
    //  ---> 1st character is alphabet or "_"
    //  ---> no comma/blank space
    //  ---> No other symbol other than "_"

// -------------------------------------------------------------------------------

    // Data types in C

    int age1 = 22;
    float pi1 = 3.14;
    char hastag = '#';

    // Boolean and String data type does't exist in C Programming Language
    // 'int' ---> Stores integers
    // 'float' ---> Stores Decimal
    // 'chat' ---> Stores characters  

// -------------------------------------------------------------------------------

    // Constants

    // Interger Constants (1, 2, 3)
    // Real Constants (2.324, 5.434)
    // Character Constants (a, g, r, F, @ ...)

// -------------------------------------------------------------------------------

    // Keywords

    // There are |32| Keywords(Reserved words) in C
    
// -------------------------------------------------------------------------------

    // Program Structure

    /*
    #include<stdio.h>

    int main(){
        printf("Hello World");
        return 0;
    }
                                */

    // C Program always starts Excuting from Main Function.

// -------------------------------------------------------------------------------

    // Comments

    // Single line Comment (//)
    // Multi line Comment (/* */)

// -------------------------------------------------------------------------------

    // Output

    printf("Kuch bhi");
    // printf helps to print anything in code

    // To print output in Next line we use (\n)
    printf("\nDemonstrating how to print in next line \n");
    printf("Kuch bhi \n");
    printf("Kuch bhi \n");
    printf("Kuch bhi \n");
    printf("Kuch bhi \n");

    // To print variable's value
    // Formart specifiers ---> |%d, %f, %c, %s|

    int myage = 22;
    float pi_value = 3.14;
    char myname[10] = "Nibas";


    printf("age is %d\n", myage);
    printf("Value of pi is %f\n", pi_value);
    printf("First letter of My name is %s\n", myname);

// -------------------------------------------------------------------------------

    // Input

    int scan;
    printf("Enter a no: ");
    scanf(" %d", &scan);
    printf("The number you selected is: %d", scan);

// -------------------------------------------------------------------------------

    // Making small Program from what you have learnt above
    // Ask user to enter 2 numbers and add them.

    int num1,num2;


    printf("\nEnter first Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    printf("\nSum of 2 numbers is : %d", num1+num2);

// -------------------------------------------------------------------------------

    // Compilation

    // A Computer program that translates C code into machine code.
    // gcc ---> Checks error

    
    return 0;
}
