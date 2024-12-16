#include<stdio.h>
int main(){
	int number;
	int sum=0;
	
	do {
	printf("please enter a positive integer");
	scanf("%d",&number);
	
	if ( number > 0){
		for (int i = 1;i <= number; i++){
			sum += i;}
		}
	else 
	{
	printf("Wrong, please enter a positive integer again.");}
	while(number<=0);
	printf("The sum of all numbers from 1 to the entered number is %d",sum);
	return 0;
}
