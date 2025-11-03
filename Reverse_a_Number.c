#include<stdio.h>

int main() {
   int n=570;
	int rim,rev=0;
	while(n>0){
		rim=n%10;
		rev=rev*10+rim;
		n=n/10;
	}
    printf("revers the Number : %d", rev);
	return 0;
    return 0;
}
