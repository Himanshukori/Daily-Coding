#include<stdio.h>
int main()
{
int Tc,num1,num2,n,d,LCM,r;
scanf("%d",&Tc);
while(Tc--)
{
scanf("%d %d",&num1,&num2);
fflush(stdin);
if(num1>num2){
n=num1;
d=num2;
}
else if(num2>num1){
n=num2;
d=num1;
}
else{
printf("%d %d\n",num1,num1);
return 0;
}
r=n%d;
while(r>0)
{
n=d;
d=r;
r=n%d;
}
LCM=(num1*num2)/d;
printf("%d %d\n",d,LCM);
}
return 0;
}