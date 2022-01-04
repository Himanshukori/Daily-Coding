#include<stdio.h>
int main()
{
	int num,x,j,ep,sp;
	printf("Enter the start point: ");
	scanf("%d",&sp);
	printf("Enter the End point: ");
	scanf("%d",&ep);
	while(sp<=ep)
	{
		x=2;
		j=0;
		num=sp;
		while(x<num)
		{
			if(num%x==0)
			{
				j=1;
			}
			x++;
		}
		if(j==0){
			printf("%d\n",num);
		}
		sp++;
	}
	return 0;
}
