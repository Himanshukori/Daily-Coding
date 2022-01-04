#include<stdio.h>
int main()
{
	int k,n,j,y;
	scanf("%d %d",&n,&k);
	int t[n];
	j=1;
	while(j<=n){
		scanf("%d",&t[j]);
		j++;
	}
	j=1;
	y=0;
	while(j<=n)
	{
		if(t[j]%k==0)
		{
			y=y+1;
		}
		j++;
	}
	printf("%d",y);
	return 0;
}
