#include<stdio.h>
int main()
{
	int x;
	float y,ans;
	scanf("%d %f",&x,&y);
	if(x%5==0 && x<=(y-0.50)){
		ans=y-(x+0.50);
		printf("%f",ans);
	}
	else if(x%5!=0||x>(y-0.50))
	{
		printf("%f",y);
	}
	return 0;
}
