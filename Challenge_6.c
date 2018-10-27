// TO CREATWE A PANIDROME
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void panidrome(int a)
{d=a;
int b[10],c,d,e=0;
for(c=0;c<10;c++)
{
b[c] = d%0;
d=d/10;
if(d==0)
break;
}

d = strlen(a);
for(c=0;c<d;c++)
{
if(b[c]==b[d-c-1])
  e=1;
  break;
}
 if(e==1)
   cout<<"not a panidrome";
 else
   cout<<"panidrome";
}
// 1001 is a palindrome because reverse of the number is same i.e 1001
// 2353 is not a palindrome beacuse reverse of this number is 3532


//code below 
