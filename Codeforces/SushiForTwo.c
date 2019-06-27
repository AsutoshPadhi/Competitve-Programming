#include <stdio.h>

int main()
{

    int n,i,j,k,l,r,max,len,state,cnt1,cnt2;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=0,cnt1=0,cnt2=0;
    state = arr[0];
    int cnt[2] = {0,0};
    
    for(i=0;i<n;i++)
    {
        if(arr[i] == state)
        {
            /*if(state==1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }*/
            cnt[state-1]++;
        }
        else
        {
            len = 2 * (cnt[0]<cnt[1]?cnt[0]:cnt[1]);
            // printf("%d--%d\n",len,i);
            state = arr[i];
            cnt[state-1] = 1;
            if(len>max)
            {
                max = len;
            }
        }
    }
    len = 2 * (cnt[0]<cnt[1]?cnt[0]:cnt[1]);
    // printf("%d--\n",len);
    if(len>max)
    {
        max = len;
    }

    printf("%d\n",max);

    return 0;
}