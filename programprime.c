/* this program is to check a number is prime or not*/
#include<stdio.h>
void main()
{
int num,i,p=0,ognum;
printf("enter the number:");
scanf("%d",&ognum);
num=ognum-1;
while(num>1)
{
  if(ognum%num==0)
{
    p=1;
    break;
}
num=num-1;
}
if(p==1)
{
printf("the number is not prime");
}
else
{
printf("the number is prime");
}
}


      
  

    
  
    
  
