# include<stdio.h>
int main (){

    // Write a program to Calculate area of a squre. (side is given)

    float Side;
    printf("Enter length of a side: ");
    scanf("%f", &Side);

    printf("Area of the squre is : %f\n", Side*Side );
   
// -------------------------------------------------------------------------------

    // Calculate Area of a circle

    float radius;
    printf("Length of radius: ");
    scanf("%f", &radius);

    printf("Area of Circle is : %f", 3.14*radius*radius);

// -------------------------------------------------------------------------------
    return 0;
}

