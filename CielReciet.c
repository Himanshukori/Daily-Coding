#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,CurrentPower,N,count,Number;
	scanf("%d",&N);
	while(N)
	{
		count=0;
		scanf("%d",&Number);
		for(i=11;i>=0;--i){
			CurrentPower=pow(2,i);
			while(Number>=CurrentPower){
				Number=Number-CurrentPower;
				count++;
			}
		}
		printf("%d\n",count);
		N--;
	}
	return 0;
}
