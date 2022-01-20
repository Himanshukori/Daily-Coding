#include<stdio.h>
int main()
{
	int power1,power2,count;
	scanf("%d",&power1);
	scanf("%d",&power2);
	int number1=32;
	int number2=128;
	count=0;
	while(power1<power2)
	{
		number1=number1*2;
		count++;
		power1++;
	}
	printf("%d",count);
	return 0;
}
