#include<stdio.h>
int main()
{
	int NoOfelements,SumtoBePrinted,loop,start,end,i,j,inrloop,sum;
	scanf("%d %d",&NoOfelements,&SumtoBePrinted);
	fflush(stdin);
	int arr[NoOfelements];
	for(loop=0;loop<NoOfelements;loop++)
	{
		scanf("%d",&arr[loop]);
	}
	loop=0;
	i=0;
	while(loop<NoOfelements)
	{
		start=arr[i];
		while(start<arr[NoOfelements-1])
		{
			j=i;
			end=arr[j];
			while(end<arr[NoOfelements-1])
			{
				sum=start+end;
				j++;
			}
			if(sum==SumtoBePrinted)
			{
				for(inrloop=start;inrloop<=end;i++)
				{
					printf("%d\n",i);
				}
				
			}
			else
			{
				i++;
			}
			
		}
		
		
		
		loop++;
	}
	
	
	
	
	return 0;
}