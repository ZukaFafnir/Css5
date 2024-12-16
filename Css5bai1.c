#include<stdio.h>
int main(){
	int number=100;
	for(number;number>=0;number--){
		if(number==0){
			printf("%d",number);
			break;
		}
		printf("%d,",number);
}
	return 0;
}
