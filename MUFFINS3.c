#include<stdio.h>
int main()
{
	int TestCases,j,num;
	int r[TestCases];
	j=0;
	scanf("%d",&TestCases);
	while(j<TestCases)
	{
		scanf("%d",&num);
		r[j]=(num/2)+1;		
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