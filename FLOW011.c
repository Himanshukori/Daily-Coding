#include<stdio.h>
int main()
{
int Tc;
float BS,HRA,DA,GS;
scanf("%d",&Tc);
while(Tc--)
{
scanf("%f",&BS);
if(BS<1500){
HRA=BS*0.1;
DA=BS*0.9;
}
else{
HRA=500;
DA=(BS*98)/100;
}
GS=BS+HRA+DA;
printf("%.2f\n",GS);
}
return 0;
}