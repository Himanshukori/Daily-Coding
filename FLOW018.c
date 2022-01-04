#include<stdio.h>
int main()
{
	int TestCases,j,num,fac,x;
	scanf("%d",&TestCases);
	int r[TestCases];
	j=0;
	while(j<TestCases)
	{
		scanf("%d",&num);
		fac=1;
		x=1;
		while(x<=num)
		{
			fac=fac*x;
			x++;
		}
		r[j]=fac;
		j++;
	}
	j=0;
	while(j<TestCases)
	{
		printf("%d\n",r[j]);
		j++;
	}	
	return 0;
}