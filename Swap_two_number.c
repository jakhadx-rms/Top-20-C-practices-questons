#include<stdio.h>

int main() {
 int Num1=10;
   int Num2=20;
    // using 3rd variable 
   int temp;
   temp=Num1;
   Num1=Num2;
   Num2=temp;
   printf("Num1 : %d \nNum2 : %d\n",Num1,Num2);
   // without 3rd var
   Num1=Num1+Num2;
   Num2=Num1-Num2;
   Num1=Num1-Num2;
   printf("Num1 : %d \nNum2 : %d",Num1,Num2);
    return 0;
}
