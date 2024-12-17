#include<stdio.h>
int main(){
	int a,b,c,n,somin,somax;
	printf("Moi ban nhap 3 so a,b va c \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("        MENU\n1.Nhap 3 so so\n2.Tong 3 so\n3.Trung binh cong 3 so\n4.So nho nhat\n5.So lon nhat\n6.Thoat\n");
	printf("Moi ban nhap muc can tinh\n");
	do{ enterAgain:
		scanf("%d",&n);
		switch(n){
			case 1: printf("Nhap 3 so so\n");
			scanf("%d %d %d",&a,&b,&c);
			break;
			case 2: printf("Tong 3 so %d\n",a+b+c);
			break;
			case 3: printf("Trung binh cong 3 so %d\n",(a+b+c)/3);
			break;
			case 4:
			if(a<b&&a<c){
				somin=a;
			}else if(b<a&&b<c){
				somin=b;
			}else {somin=c;
			}
			printf("So nho nhat %d\n",somin);
			break;
			case 5: 
			if(a>b&&a>c){
				somax=a;
			}else if(b>a&&b>c){
				somax=b;
			}else {somax=c;
			}
			printf("So lon nhat %d\n",somax);
			break;
			case 6: printf("Thoat");
			return 0;
			default: printf("invalid data please enter again!!\n");
			goto enterAgain;
		}

	}while(n>0);
	return 0;
}
