#include<stdio.h>
int main()
{
	int x,num,dc;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(x<0){
		num=x*(-1);
	}
	else{
		num=x;
	}
	dc=1;
	while(num>9)
	{
		num=num/10;
		dc++;
	}
	printf("The number of digits in %d is %d.",x,dc);
	
	return 0;
}
