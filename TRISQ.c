#include<stdio.h>
int main()
{
int Tc;
scanf("%d",&Tc);
while(Tc--)
{
int result,x,base;
scanf("%d",&base);
result=0;
x=(base/2)-1;
if(x>0){
result=(x*(x+1))/2;
}
printf("%d\n",result);
}
return 0;
}