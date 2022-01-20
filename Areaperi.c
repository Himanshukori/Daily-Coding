#include<stdio.h>
int main()
{
int length,breadth,area,perimeter;
scanf("%d",&length);
scanf("%d",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if (area>perimeter){
printf("Area\n%d",area);
}
else if(perimeter>area){
printf("Peri\n%d",perimeter);
}
else if(perimeter==area){
printf("Eq\n%d",area);
}
return 0;
}