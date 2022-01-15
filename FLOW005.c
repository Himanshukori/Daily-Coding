#include<stdio.h>
int main()
{
	int N,Number,i,j,count,CurrentNote;
	scanf("%d",&N);
	int arr[6]={100,50,10,5,2,1};
	while(N)
	{
		scanf("%d",&Number);
		count=0;
		for(i=0;i<=6;i++){
			CurrentNote=arr[i];
			while(Number>=CurrentNote){
				Number=Number-CurrentNote;
				count++;
			}
		}
		printf("%d\n",count);
		N--;
	}
	return 0;
}
