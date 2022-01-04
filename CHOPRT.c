#include<stdio.h>
int main()
{
	int TestCases,j,num1,num2;
	scanf("%d",&TestCases);
	int r[TestCases];
	j=0;
	while(j<TestCases)
	{
		scanf("%d %d",&num1,&num2);
		fflush(stdin);
		if(num1<num2)
		{
			r[j]=0;
		}
		else if(num1>num2)
		{
			r[j]=1;
		}
		else if(num1==num2)
		{
			r[j]=2;
		}
		j++;
	}
	j=0;
	while(j<TestCases)
	{
		if(r[j]==0)
		{
			printf("<\n");
		}
		if(r[j]==1)
		{
			printf(">\n");
		}
		if(r[j]==2)
		{
			printf("=\n");
		}
		j++;
	}
	return 0;
}