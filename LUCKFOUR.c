#include<stdio.h>
int main()
{
	int T,num,j,d,y,z;
	scanf("%d",&T);
	int r[T];
	j=0;
	while(j<T)
	{
		scanf("%d",&num);
		y=0;
		while(num>0)
		{
			d=num%10;
			if(d==4){
				y++;
			}
			num=num/10;
		}
		r[j]=y;		
		j++;
	}
	j=0;
	while(j<T)
	{
		printf("%d\n",r[j]);
		j++;
	}
	return 0;
}
