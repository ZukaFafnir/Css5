#include<stdio.h>
int main(){
	int a,b,boimin,uocmax;
	printf("Please enter two positive number: ");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a||i<=b;i++){
		if(a%i==0&&b%i==0){
			uocmax=i;
		}
	}
	printf("The Least Common Multiple (LCM) of two numbers. %d",boimin=a*b/uocmax);
	return 0;
}
