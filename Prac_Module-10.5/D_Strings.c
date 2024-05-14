#include<stdio.h>
#include<string.h>
int main()
{
    char str1[11], str2[11];
    scanf("%s \n %s", str1, str2);

   int str1_size = strlen(str1);
   int str2_size = strlen(str2);

   char concatStr[str1_size + str2_size + 1]; 
   strcpy(concatStr, str1);
    strcat(concatStr, str2);

   char temp= str1[0]; 
    str1[0]= str2[0]; 
    str2[0]= temp; 

    printf("%d %d\n", str1_size, str2_size);
    printf("%s\n", concatStr);
    printf("%s %s", str1, str2);

    return 0;
}