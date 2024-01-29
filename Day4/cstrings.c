#include <stdio.h>

void printstring(char arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (arr[i] != '\0')
         printf("'%c' ", arr[i]);
      else
         printf("'\\0'");
   }
   printf("\n");
}

int main()
{
   char str[7];

   str[6] = 'x'; // a character is indicated by single quotes
   // str[5] = "x";  this will not work --  a string is not a character

   char str1[] = "Hello"; // create an array to store the string PLUS the terminating character '\0' not '0'
   printf("%s\n", str1); 
   printstring(str1, 6);

   char str2[10] = "world"; // create an array 10 characters long and pad unused characters with '\0'
   printf("%s\n", str2);
   printstring(str2, 10);

   char str3[] = {'b', 'y', 'e'}; // BUG -- this string is not null terminated
   printf("%s\n", str3);
   printstring(str3, 5); // might blow up

   // printf("%c\n", str2[20]); // outside of str2; might blow up
   char str4[] = {'g', 'o', 'o', 'd', 'b', 'y', 'e', '\0'}; // this is properly null terminated
   char str5[10];
   str5[5] = 'H';

   printf("%s\n", str4);
   printstring (str4, 8);

   printf("%s\n", str5);
   printstring(str5, 10); // this should be safe, but who knows what's in there?
}
