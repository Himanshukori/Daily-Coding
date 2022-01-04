#include<stdio.h>
int main()
{
	int j,x,mul,mod,num;
	printf("Enter the number To be reversed: ");
	scanf("%d",&x);
	j=x;
	num=0;
	if(x<0)
	{
		j=x*(-1);
	}
	else{
		j=x;
	}
	while (j>0){
		mul=num*10;
		mod=j%10;
		num=mul+mod;
		j=j/10;
	}
	if(x<0){
		num=num*(-1);
	}
	printf("%d is reversed as %d.",x,num);
	
	return 0;
}
