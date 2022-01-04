#include<stdio.h>
int main()
{
	int j,x,mul,mod,num,TestCases,i;
	scanf("%d",&TestCases);
	int r[TestCases];
	i=0;
	while(i<TestCases)
	{
		scanf("%d",&x);
		num=0;
		j=x;
		while (j>0)
		{
			mul=num*10;
			mod=j%10;
			num=mul+mod;
			j=j/10;
		}
		r[i]=num;
		i++;
	}
	i=0;
	while(i<TestCases)
	{
		printf("%d\n",r[i]);
		i++;
	}
	return 0;
}