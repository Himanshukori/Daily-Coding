#include<stdio.h>
int main()
{
int Tc,N,i,count;
scanf("%d",&Tc);
while(Tc--)
{
scanf("%d",&N);
char arr[N];
scanf("%s",&arr);
count=0;
for(i=0;i<N;i++)
{
if(arr[i]=='Y'){
printf("NOT INDIAN\n");
count=1;
break;
}
else if(arr[i]=='I'){
printf("INDIAN\n");
count=1;
break;
}
}
if(count==0){
    printf("NOT SURE\n");
}
}
return 0;
}