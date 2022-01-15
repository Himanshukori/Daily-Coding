#include <stdio.h>

int main(void) {
	// your code goes here0.
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char k;
	    scanf(" %c",&k);
	    if(k=='B'||k=='b')
	    printf("BattleShip\n");
	    else if(k=='C'||k=='c')
	    printf("Cruiser\n");
	    else if(k=='D'||k=='d')
	    printf("Destroyer\n");
	    else if(k=='F'||k=='f')
	    printf("Frigate\n");
	    
	}
	return 0;
}