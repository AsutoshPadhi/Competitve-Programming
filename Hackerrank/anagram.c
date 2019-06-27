#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000], b[10000];
    scanf("%s",a);
    scanf("%s",b);
    int arr_a[26] = { 0 }, arr_b[26] = { 0 };

    for(int i=0; i<strlen(a); i++)
    {
        arr_a[(a[i])-97]++;
    }
    for(int i=0; i<strlen(b); i++)
    {
        arr_b[(b[i])-97]++;
    }

    /*for(int i=0; i<26; i++)
    {
        printf("%d ",arr_a[i]);
    }
    printf(" \n");
    for(int i=0; i<26; i++)
    {
        printf("%d ",arr_b[i] );
    }
    printf(" \n");*/

    int cnt=0;
    for(int i=0; i<26; i++)
    {
        if(arr_a[i] != arr_b[i])
        {
            // printf("%d ",i);
            cnt += (arr_a[i]>arr_b[i])?(arr_a[i]-arr_b[i]):(arr_b[i]-arr_a[i]);
        }
    }

    printf("%d\n",cnt);

    return 0;
}