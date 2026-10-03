#include<stdio.h>//calculation of two no
float main(){
    float a,b;
    printf("enter the no a:");
    scanf("%f",&a);

    printf("enter the no b:");
    scanf("%f",&b);
    
    printf("Sum is : %f \n",a+b );//addition of two number
    printf("Subtraction is :%f\n", a-b);//subtraction of two number
    printf("Multiplication is :%f\n",a*b);// multiplication of two no
    if(b!=0){
    printf("Division is : %f\n",a/b);//division of two number
  
    } else{
        printf("Division is not possible:");// not possible
    } 
    return 0;
} 