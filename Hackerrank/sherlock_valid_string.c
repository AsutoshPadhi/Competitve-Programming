#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100000];
    scanf("%s",str);

    int arr[26];
    for(int i=0;i<strlen(str);i++)
    {
        arr[str[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int first1=0;
    int first2=0;
    int var1, var2;
    int cnt_var1=0;
    int cnt_var2=0;
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            if(first1 == 0)
            {
                var1 = arr[i];
                cnt_var1++;
                first1 = 1;
                printf("c1\n");
            }
            else if(arr[i] == var1)
            {
                cnt_var1++;
                printf("c2\n");
            }
            else if(first2 == 0)
            {
                var2 = arr[i];
                cnt_var2++;
                first2 = 1;
                printf("c3\n");
                flag=1;
            }
            else if(arr[i] == var2)
            {
                cnt_var2++;
                printf("c4\n");
            }
            else
            {
                printf("c5\n");
                printf("NO\n");
                exit(0);
            }
        }
    }

    if(flag==0)
    {
        printf("YES-1\n");
    }
    else if(var1>var2)
    {
        if(var1-var2 == 1 && cnt_var1-cnt_var2<=1)
        {
            printf("YES-2\n");
        }
        else
        {
            printf("NO-3\n");
        }
    }
    else
    {
        if(var2-var1 == 1 && cnt_var2-cnt_var1<=1)
        {
            printf("YES-4\n");
        }
        else
        {
            printf("NO-5\n");
        }
    }

    return 0;
}