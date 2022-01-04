#include<stdio.h>
int main()
{
	int Number;
	scanf("%d",&Number);
	if(Number%4==0)
	{
		printf("%d\n",Number+1);
	}
	else
	{
		printf("%d\n",Number-1);
	}
	return 0;
}