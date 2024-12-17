#include <stdio.h>

int main(){
	int positive_int;
	int sum = 0;
	printf("Please enter a positive integer: ");
	do {
		scanf("%d", &positive_int);
		
		if (positive_int > 0) {
		for(int i=1 ;i <= positive_int ; i++){
			sum+=i;}
		}
		else {
            printf("Wrong, please enter a positive integer again.\n");}
            
		printf("The sum of all numbers from 1 to the entered number is %d\n", sum);
	}
		while(positive_int<=0);
		return 0;
		
	
	
	
	
}
