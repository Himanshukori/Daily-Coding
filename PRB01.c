#include<stdio.h>
int main()
{
	int NumberOfTestCases,j,num,y,k,ep;
	scanf("%d",&NumberOfTestCases);
	j=0;
	while(j<NumberOfTestCases)
	{
		k=2;
		y=0;
		scanf("%d",&num);
		ep=num/2;
		while(k<ep)
		{
			if(num%k==0){
				y=1;
				break;
			}
			k++;		
		}
		if(y==1||n<2){
		    printf("no\n");
		}
		else{
		    printf("yes\n");
		}
	    j++;
	}
	return 0;
}