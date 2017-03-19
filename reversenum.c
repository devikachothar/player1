#include<stdio.h>
void main()
{
   int n,r,s;
   scanf("%d",&n);
   r=0,s=0;
   while(n!=0)
   {
      r=n%10;
      s= s*10+r;
      n/=10;
   }
   printf("%d",s);
}
