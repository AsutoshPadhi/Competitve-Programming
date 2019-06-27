#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int i,j,k, min=INT_MAX;
    int arr[n][m];
    int diff[n-1];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<m;k++)
            {
                // printf("%d %d %d\n",arr[i][j],arr[i-1][k],min);
                if(abs(arr[i][j]-arr[i-1][k]) < min)
                {
                    min = abs(arr[i][j]-arr[i-1][k]);
                    // printf("m = %d\n",min);
                }
            }
            // printf("min = %d\n---------------------------\n",min);
        }
        diff[i-1] = min;
    }
    min = INT_MAX;
    for(i=0;i<n-1;i++)
    {
        if(diff[i]<min)
        {
            min = diff[i];
        }
    }
    // printf("=================\n");
    printf("%d\n",min);
    return 0;
}