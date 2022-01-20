#include<stdio.h>
int main()
{
	int Tc,i,uppertriangle,lowertriangle,sum;
	int box1[3],box2[3],box3[3];
	scanf("%d",&Tc);
	while(Tc>0)
	{
		scanf("%d",&sum);
		i=0;
		while(i<3){
			scanf("%d",&box1[i]);
			fflush(stdin);
			i++;
		}
		i=0;
		while(i<3){
			scanf("%d",&box2[i]);
			fflush(stdin);
			i++;
		}
		i=0;
		while(i<3){
			scanf("%d",&box3[i]);
			fflush(stdin);
			i++;
		}
		if(box1[0]==box2[1]&&box2[1]==box3[2]&&box2[1]==sum)
		{
			printf("0\n");
		}
		else
		{
			uppertriangle=box1[1]+box1[2]+box2[2];
			lowertriangle=box2[0]+box3[0]+box3[1];
			if (uppertriangle>lowertriangle)
			{
				printf("%d\n",uppertriangle);
			}
			else if(uppertriangle<lowertriangle)
			{
				printf("%d\n",lowertriangle);
			}
			else if(uppertriangle==lowertriangle)
			{
				printf("%d\n",uppertriangle);
			}
		}
		Tc--;		
	}	
	return 0;
}
