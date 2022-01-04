#include<stdio.h>
int main()
{
	int NumberOfSoldiers,j;
	scanf("%d",&NumberOfSoldiers);
	int r[NumberOfSoldiers];
	j=0;
	while(j<NumberOfSoldiers)
	{
		scanf("%d",&r[j]);		
		j++;
	}
	j=0;
	int e=0;
	int o=0;
	while(j<NumberOfSoldiers)
	{
		if(r[j]%2==0)
		{
			e++;
		}
		else if(r[j]%2!=0)
		{
			o++;
		}
		j++;
	}
	if(e>o)
	{
		printf("READY FOR BATTLE");
	}
	else
	{
		printf("NOT READY");
	}
	return 0;
}