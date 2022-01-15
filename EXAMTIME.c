#include<stdio.h>
int main()
{
	int TC,total1,total2,DSA1,DSA2,TOC1,TOC2,DM1,DM2;
	scanf("%d",&TC);
	while(TC)
	{
		scanf("%d %d %d",&DSA1,&TOC1,&DM1);
		fflush(stdin);
		scanf("%d %d %d",&DSA2,&TOC2,&DM2);
		fflush(stdin);
		total1=DSA1+DM1+TOC1;
		total2=DSA2+DM2+TOC2;
		if (total1>total2)
		{
			printf("DRAGON\n");
		}
		else if(total1<total2)
		{
			printf("SLOTH\n");
		}
		else if(total1==total2)
		{
			if (DSA1>DSA2) printf("DRAGON\n");
			else if(DSA1<DSA2) printf("SLOTH\n");
			else if(DSA1==DSA2)
			{
				if(TOC1>TOC2) printf("DRAGON\n");
				else if(TOC1<TOC2) printf("SLOTH\n");
				else if(TOC1==TOC2)
				{
					if (DM1>DM2) printf("DRAGON\n");
					else if(DM1<DM2) printf("SLOTH\n");
					else if(DM1==DM2)
					{
						printf("TIE\n");
					}
				}
			}
		}
		TC--;
	}
	return 0;
}
