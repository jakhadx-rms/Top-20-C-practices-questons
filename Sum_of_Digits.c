#include<stdio.h>

int main() {
   int n=570;
	int rim,sum=0;
	while(n>0){
		rim=n%10;
		sum=sum+rim;
		n=n/10;
		
	}
   	printf("Sum of digits : %d \n",sum);
    return 0;
}
