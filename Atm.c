#include<stdio.h>
int main()
{
	float x,z,y;
	z=x+0.50;
	scanf("%d",&x);
	scanf("%f",&y);
	if(x%5==0)
	{
		if (y<z){
			printf("%.2f",y);
		}
		else{
			y=y-x;
			y=y-0.50;
			printf("%.2f",y);
		}
	}
	else{
		printf("%.2f",y);
	}
	return 0;
}
