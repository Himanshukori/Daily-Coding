#include<stdio.h>
int main()
{
	int T,num,j,d,x,f,b,c;
	scanf("%d",&T);
	int r[T];
	j=0;
	while(j<T)
	{
		scanf("%d",&num);
		x=num;
		d=x%10;
		f=1;
		while(x>9)
		{
			f=f*10;
			x=x/10;
		}
		x=num;
		b=x/f;
		r[j]=d+b;		
		j++;
	}
	j=0;
	while(j<T){
		printf("%d\n",r[j]);
		j++;
	}
	return 0;
}
