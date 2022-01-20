#include<stdio.h>
int main()
{
int ch;
scanf("%c",&ch);
if(ch== 'A' || ch== 'E' || ch=='I' || ch== 'O' || ch== 'U')
{
printf("Vowel");
}
else
{
printf("CONSONANT");
}
return 0;
}