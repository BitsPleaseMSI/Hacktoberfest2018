//TASK
//Convert the string in lowercase without using any functions
//Hint: Add 32 to the ascii vaule of the character to get the lowercase character
#include<stdio.h>
#include<string.h>
int main(){
   char str[25];
   int i,j,k;
   printf("Enter the string: ");
   gets(str);


   for(i=0;i<=strlen(str);i++)
   {
     //CODE
      str[i]=str[i]+32;


   }
   printf("\nLower Case String is: %s",str);
   return 0;
}
