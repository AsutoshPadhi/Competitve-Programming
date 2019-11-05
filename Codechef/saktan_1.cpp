#include <iostream>
#include <math.h>
#include <set>

using namespace std;

int nonZero(int arr[], int s)
{
    int cnt = 0;
    for(int i=0; i<s; i++)
    {
        if(arr[i] != 0)
        {
            cnt++;
        }
    }

    return cnt;
}

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

        int cnt = 0;

        int row[n] = {0};
        int col[m] = {0};

        while(q-->0)
        {
            int r, c;
            cin>>r>>c;
            
            if( row[r-1] == 0 &&  col[c-1] == 0 )
            {
                cnt += (n + m) - (2 + (2 * nonZero(row, n)) + (2 * nonZero(col, m)));
                row[r-1] = 1 - row[r-1];
                col[c-1] = 1 - col[c-1];
            }
            else if( row[r-1] == 1 &&  col[c-1] == 0 )
            {
                cnt += (n - m) + (2 * nonZero(col, m)) - (nonZero(row, n)) + 1;
                row[r-1] = 1 - row[r-1];
                col[c-1] = 1 - col[c-1];
            }
            
            cout<<cnt<<endl;
        }        

        cout<<cnt<<endl;
    }

    return 0;
}