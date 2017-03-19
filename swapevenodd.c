#include<stdio.h>
void main()
{
 char a[10],r[10];
	  char b;
  int i,k=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {   
       if((i%2==0)||(i==0))
            b=a[i];
       else if(i==1)
       {
           r[k]=a[1];
           k++;
           r[k]=b;
       }
       else
         {  r[k]=a[i];
            k++;
            r[k]=b;
         }
   }  
   printf("%s",r);
}
