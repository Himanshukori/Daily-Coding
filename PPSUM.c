#include<stdio.h>
int sum(int sum1)
{
	int i,x=0;
	for(i=sum1;i>=0;i--){
		x=x+i;
	}
	return x;	
}
int main()
{
	int TC,j,D,N;
	scanf("%d",&TC);
	while(TC--)
	{
		scanf("%d %d",&D,&N);
		fflush(stdin);
		for(j=0;j<D;j++){
			N=sum(N);
		}
		printf("%d\n",N);		
	}
	return 0;
}
