#include<stdio.h>
   
int main() {
   int num;
  printf("Nnumber of check Prime or not : ");
  scanf("%d",&num);
   
  int i=2;
  int k=0;
  if (num<=1){
  	  	 printf("Yes the number is not a prime number");
		}
  while(i<=num/2){
  	  if (num%i==0){
  	  	 k++;
		}
	  i++;
  }  
  if (k==0){
  	  	 printf("Yes the number is a prime number");
		}
		else{
			printf("Number is not a prime number");
		}
  
    return 0;
}
