#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,a;
	printf("Enter the number");
	scanf("%d",&a);//no of * of shape
	for(i=1;i<=a;i++){//no of rows
		for(j=1;j<=a;j++){//no of columns
			if(j>=(a+1)-i)//condition if j is greater than * print
				printf("*");
			else
				printf(" ");
		}
		printf("\n");//for next line
	}
	getch();
	return 0;
}
