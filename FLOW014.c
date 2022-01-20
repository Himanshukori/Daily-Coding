#include<stdio.h>
int main()
{
int Tc;
scanf("%d",&Tc);
while(Tc--)
{
float Hard,content,tensile;
scanf("%f %f %f",&Hard,&content,&tensile);
if (Hard>50)
{
if(content<0.7 && tensile>5600){
printf("10\n");
}
else if(content<0.7){
printf("9\n");
}
else if(tensile>5600){
printf("7\n");
}
else if(content>=0.7 && tensile<=5600)
{
printf("6\n");
}
}
else if(content<0.7)
{
if(tensile>5600){
printf("8\n");
}
else if(Hard<=50 && tensile<5600)
{
printf("6\n");
}
}
else if(tensile>5600)
{
if(Hard<=50 && content>=0.7)
{
printf("6\n");
}
}
else{
printf("5\n");
}
}
return 0;
}