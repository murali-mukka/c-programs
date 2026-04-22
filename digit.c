// Online C compiler to run C program online
#include <stdio.h>
int main()
{
   char ch;
   printf("enter the character \n");
   scanf("%c",&ch);
   int res=(ch>='0')&&(ch<='9');
   printf("%c is a digit i.e is:%c",ch,res);
   return 0;
} 