#include<stdio.h>
int main()
{
	int TestCases,j,IntegerN;
	scanf("%d",&TestCases);
	int r[TestCases];
	j=0;
	while(j<TestCases)
	{
		scanf("%d",&IntegerN);
		if(IntegerN<10)
		{
			r[j]=1;
		}
		else
		{
			r[j]=0;
		}
		j++;
	}
	j=0;
	while(j<TestCases)
	{
		if(r[j]==1)
		{
			printf("Thanks for Helping Chef!\n");
		}
		else if(r[j]==0)
		{
			printf("-1\n");
		}
		j++;
	}
	return 0;
}