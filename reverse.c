#include<stdio.h>
void main()
{
   	char c[10],r[10];
   int n,i,j,k;
   scanf("%s",c);
   for(i=0;c[i]!='\0';i++)
   {  k=i;   }
   for(j=0;j<=(i-1);j++)
   { 
       r[j]=c[k];
       k--;
   }
   printf("%s",r);
}
