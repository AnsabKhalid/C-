#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b;
    int c;
	printf("Enter the no of students\n");
	scanf("%d",&b);
	int d[b];
		for(a=1;a<=b;a++){
		scanf("%d",&c);
		d[b] = c;
		printf("%d:Number of students=%d\n",a,d[b]);
	}
	getch();
	return 0;
}
