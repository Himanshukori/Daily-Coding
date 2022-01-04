#include<stdio.h>
int main()
{
	int num,x,j;
	printf("Enter the number to be checked: ");
	scanf("%d",&num);
	x=2;
	j=0;
	if(num<=0)
	{
		printf("The number is negative or zero, Cannot determine whether it is prime or not.");
	}
	if(num==1)
	{
		printf("The number is 1 which is neither prime nor composite.");
	}
	while(x<num)
	{
		if(num%x==0){
			j=1;
			break;
		}
		x++;
	}
	if(j==0){
		printf("The number %d is a Prime number",num);
	}
	else{
		printf("The number %d is not a prime number",num);
	}
	return 0;
}
