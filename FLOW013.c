#include<stdio.h>
int main()
{
	int TestCases,j,angle1,angle2,angle3,sum;
	scanf("%d",&TestCases);
	int r[TestCases];
	j=0;
	while(j<TestCases)
	{
		scanf("%d %d %d",&angle1,&angle2,&angle3);
		fflush(stdin);
		sum=angle1+angle2+angle3;
		if(sum==180)
		{
			r[j]=0;
		}
		else if(sum!=180)
		{
			r[j]=1;
		}
		j++;
	}
	j=0;
	while(j<TestCases)
	{
		if(r[j]==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		j++;	
	}
	return 0;
}