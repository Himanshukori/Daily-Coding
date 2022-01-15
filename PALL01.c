#include<stdio.h>
int main()
{
	int NumberOfTestCases,j,k,num,temp,sum,mod;
	j=0;
	scanf("%d",&NumberOfTestCases);
	while(j<NumberOfTestCases)
	{
		sum=0;
		scanf("%d",&num);
		temp=num;
		k=0;
		while(k<num)
		{
			mod=temp%10;
			sum=(sum*10)+temp;
			k=k/10;
		}
		if(sum==num) {
			printf("wins");
			}
		else {
			printf("loses");
			}
		j++;
	}
	return 0;
}