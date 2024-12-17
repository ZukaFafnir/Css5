#include<stdio.h>
int main(){
	float a,b;
	int n;
	printf("Moi ban nhap 2 so a vs b \n");
	scanf("%f%f",&a,&b);
	printf("        CALCULATOR\n1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n");
	printf("Moi ban nhap muc can tinh\n");
	do{ enterAgain:
		scanf("%d",&n);
		switch(n){
			case 1: printf("Tong 2 so la %.2f\n",a+b);
			break;
			case 2: printf("Hieu 2 so la %.2f\n",a-b);
			break;
			case 3: printf("Tich 2 so la %.2f\n",a*b);
			break;
			case 4: printf("Thuong 2 so la %.2f\n",a/b);
			break;
			case 5: printf("Thoat");
			return 0;
			default: printf("invalid data please enter again!!\n");
			goto enterAgain;
		}

	}while(0);
	return 0;
}
