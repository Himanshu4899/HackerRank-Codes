#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    int i,j;
    puts("Enter the Text:");
    gets(text);
    strrev(text);
    for(i=0;text[i]!='\0';i++)
    {
       if(text[i+1]==' ' || text[i+1]==NULL)
       {
           for(j=i;j>=0 && text[j]!=' ';j--)
            printf("%c",text[j]);
       }
       printf(" ");
    }
    getche();
}
