#include<stdio.h>
int main()
{
int i,j,y,count,check,x[10],cf[10],lookfor;
for(y=0;y<9;y++)
{
scanf("%d",&x[y]);
}
j=0;
while(j<=9)
{
i=0;
check=0;
while(i<j)
{
if(x[i]==x[j])
{
check=1;
break;
}
i++;
}
if(check==0)
{
y=0;
count=0;
lookfor=x[j];
while(y<=9)
{
if(x[y]==lookfor)
{
count++;
}
y++;
cf[j]=count;
}
printf("%d is found %d times\n",lookfor,count);
}
else{
printf("%d is found %d times\n",x[j],cf[i]);
}
j++;
}
return 0;
}