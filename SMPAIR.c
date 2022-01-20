#include<stdio.h>
int main()
{
long long int Tc;
scanf("%lld",&Tc);
while(Tc--)
{
int N,i,j,sum;
scanf("%d",&N);
int arr[N];
for(i=0;i<N;i++)
{
scanf("%d",&arr[i]);
}
i=0;
sum=arr[0]+arr[1];
while(i<N)
{
j=i+1;
while(j<N)
{
if(sum>(arr[i]+arr[j]))
{
sum=arr[i]+arr[j];
}
j++;
}
i++;
}
printf("%d\n",sum);
}
return 0;
}