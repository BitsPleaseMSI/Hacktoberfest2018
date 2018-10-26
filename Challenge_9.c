//TASK
//Convert the string in lowercase without using any functions
//Hint: Add 32 to the ascii vaule of the character to get the lowercase character
#include<stdio.h>
#include<string.h>
int main(){
   char str[25];
   int i,j,k;
   printf("Enter the string: ");
   scanf("%s",str);

   for(i=0;i<=strlen(str);i++){
     j = str[i];
      if(j>65&&j<90)
     {
         j = j+32;
         str[i] = j;
      }
   }
   printf("\nLower Case String is: %s",str);
   return 0;
}
