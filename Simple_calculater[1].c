#include<stdio.h>
int main()
{
    int ch;
    float a,b,result;
    while(1)
    {
    printf("\n\n\t SIMPLE CALCULATOR");
    
    printf("\nEnter the first number: ");
    scanf("%f",&a);
    printf("\nEnter the second number:");
    scanf("%f",&b);
    printf("\n1.Addition\t\t 2.Subtration\n3.Multiplication\t 4.Division\n5.Exit");
    printf("\n\nEnter Your Choice:\t");
    scanf("%d",&ch);
    
    if (ch==5)
    {
        printf("\n\t    THANK YOU");
    return 0;
   
    }
    switch(ch)
    {
    case 1:result=a+b;
    printf("\nSum of %0.3f and %0.3f is %0.3f",a,b,result);
    break;
    
    case 2: result=a-b;
    printf("\nDifference between %0.3f and %0.3f is %0.3f",a,b,result);
     break;
    
    case 3: result=a*b;
    printf("\nProduct of %0.3f and %0.3f is %0.3f",a,b,result);
     break;
   
   case 4: 
   if(b==0){
   printf("\nSecond number can't be equal to zero");
    return 0;
   }
   else
   result=a/b;
    printf("\nQuotient of %0.3f and %0.3f is %0.3f",a,b,result);
     break;

    default:
    printf("\nInvalid choice");
     break;
    }
    }

}