#include<stdio.h>
int main()
{
	int Tc,n,x,i,e,f,swap,sum,y;
	scanf("%d",&Tc);
	while(Tc--)
	{
		scanf("%d %d",&n,&x);
		fflush(stdin);
		int fd[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&fd[i]);
		}
		e=0;
		while(e<=n-2)
		{
			f=e+1;
			while(f<=n-1)
			{
				if (fd[f]>fd[e])
				{
					swap=fd[e];
					fd[e]=fd[f];
					fd[f]=swap;
				}
				f++;
			}
			e++;
		}
		sum=0;
		i=0;
		while(i<n)
		{
			sum=sum+fd[i];
			if (sum>=x) {
			break;
			}
			i++;
		}
		if (i==n) {
		printf("-1\n");
		}
		else{
			printf("%d\n",i+1);
		}
	}
	return 0;
}
