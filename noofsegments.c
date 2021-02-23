#include<stdio.h>
int main()
{
    int i,count=0;
    char s[40];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '||s[i+1]=='\0')
        {
            count++;
        }    
    }
     printf("%d\n",count);
return 0;
}