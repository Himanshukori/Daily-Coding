#include<stdio.h>
int main()
{
	int tc;
	float totalprice,quantity,price,discount;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%f %f",&quantity,&price);
		fflush(stdin);
		totalprice=quantity*price;
		discount=totalprice*0.1;
		if(totalprice>1000.0){
			printf("%f\n",totalprice-discount);
		}
		else{
			printf("%f\n",totalprice);
		}
	}
	return 0;
}
