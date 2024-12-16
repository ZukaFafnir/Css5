#include<stdio.h>
int main(){
	int number=75;
	int n;
	printf("please guess the number(Hint: the number has two digits):");
	while(n!=number){
		scanf("%d",&n);
		if(n==number)
		printf("Congratulations, you guessed it right! number is %d.",number);
		else
		 printf("Wrong, please guess again:");
}
		
	return 0;
}
