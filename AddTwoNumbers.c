#include<stdio.h>
int main()
{
	int T,x,a,b;
	scanf("%d",&T);
	int r[T];
	x=1;
	while(x<=T){
		scanf("%d %d",&a,&b);
		r[x]=a+b;
		x++;
	}
	while(x<=T){
		printf("%d",r[x]);
	}
	return 0;
}
