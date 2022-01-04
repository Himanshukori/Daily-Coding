#include<stdio.h>
int main()
{
	int T,j,a,b,c;
	scanf("%d",&T);
	int r[T];
	j=0;
	while(j<T){
		scanf("%d %d",&a,&b);
		c=a%b;
		r[j]=c;
		j++;
	}
	j=0;
	while(j<T){
		printf("%d\n",r[j]);
		j++;
	}
	return 0;
}

