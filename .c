#include <stdio.h>
#include <string.h> 
int main()
{ 
int i; 
char arr[2][100]; 
for(i=0;i<2;i++) 
{
    scanf("%[^\n]s",arr[i]); 
} 
for(i=0;i<2;i++) 
{ 
   printf("%s\n",arr[i]); 
} 
 return 0; 
 } 



