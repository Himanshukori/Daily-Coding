#include<stdio.h>
int main()
{
	int x,y,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<0)
	{
		x=num*(-1);
	}
	else{
		x=num;
	}
	while(x>0){
		y=x%10;
		printf("%d\n",y);
		x=x/10;
	}
	return 0;
}
