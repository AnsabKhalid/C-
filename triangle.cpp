#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter the number\n");
	scanf("%d",&a);//the no of * in shape
	for(b=1;b<=a;b++){//no of columns
		for(c=1;c<=b;c++){//no of rows
				printf("* ");
		}
		printf("\n");//for next line
	}
	getch();
	return 0;
}
