#include<stdio.h>
int main()
{
int Tc,X;
scanf("%d",&Tc);
while(Tc--){
scanf("%d",&X);
if(X%10==0){
printf("0\n");
}
else if(X%10!=0 && X%5==0)
{
printf("1\n");
}
else{
printf("-1\n");
}
}
return 0;
}