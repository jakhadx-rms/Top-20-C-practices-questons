#include<stdio.h>

int main() {
  int t1=0;
  int t2=1;
  printf("Fibonacci series : ");
  printf("%d %d ",t1, t2);
  int temp;
  for(int i=3 ; i<=10 ; i++){
  	temp=t1+t2;
  	printf("%d ",temp);
  	t1=t2;
  	t2=temp; 
  }
    return 0;
}
