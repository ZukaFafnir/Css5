#include<stdio.h>
int main(){
	int n;
	int number;
	printf("Please enter a positive number  \n");
	scanf("%d",&n);
	while(n!=0){
	number=n%10;
	printf("%d,",number);
	n=n/10;
}
	return 0;
	}
