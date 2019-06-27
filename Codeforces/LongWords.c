#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test-->0)
    {
        char str[1000];
        scanf("%s",str);
        int len = strlen(str);
        if(len>10)
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }

    return 0;
}