#include<stdio.h>
int main()
{
	int NumberOfRounds,j,s1,s2,lead,win;
	scanf("%d",&NumberOfRounds);
	lead=0;
	for(j=0;j<NumberOfRounds;j++)
	{
		scanf("%d %d",&s1,&s2);
		fflush(stdin);
		if((s1-s2)>lead)
		{
			lead=s1-s2;
			win=1;
		}
		else if((s2-s1)>lead)
		{
			lead=s2-s1;
			win=2;		
		}
	}
	printf("%d %d",win,lead);

	return 0;
}