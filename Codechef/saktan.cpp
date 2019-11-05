#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, m, q;
        cin>>n>>m>>q;
        int arr[n][m];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                arr[i][j] = 0;
            }
        }

        while(q-->0)
        {
            int r, c;
            cin>>r>>c;
            for(int i=0; i<m; i++)
            {
                arr[r-1][i] += 1;
            }
            for(int i=0; i<n; i++)
            {
                arr[i][c-1] += 1;
            }
        }

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j] % 2 != 0)
                {
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}