#include<stdio.h>
int main()
{
	int T,j,num,d,x,y;
	scanf("%d",&T);
	int sum[T];
	j=0;
	while(j<T){
		scanf("%d",&num);
		x=0;
		while(num>0)
		{
			d=num%10;
			x=x+d;
			num=num/10;
		}
		sum[j]=x;
		j++;
	}
	j=0;
	while(j<T){
		printf("%d\n",sum[j]);
		j++;
	}
	return 0;
}

