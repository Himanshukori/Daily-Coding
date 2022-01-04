#include<stdio.h>
int main()
{
	int TestCases,j,num1,num2;
	int r1[TestCases];
	int r2[TestCases];
	j=0;
	scanf("%d",&TestCases);
	while(j<TestCases)
	{
		scanf("%d %d",&num1,&num2);
		fflush(stdin);
		if(num1>num2)
		{
			r1[j]=num1;
			r2[j]=num1+num2;
		}
		else if(num2>num1)
		{
			r1[j]=num2;
			r2[j]=num1+num2;
		}	
		j++;
	}
	j=0;
	while(j<TestCases)
	{
		printf("%d %d\n",r1[j],r2[j]);	
		j++;
	}
	return 0;
}