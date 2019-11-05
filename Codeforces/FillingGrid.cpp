#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    int base[r][c] = {0};
    for(int i=0; i<r; i++)
    {
        int ip;
        cin>>ip;
        if(ip != 0)
        {
            for(int j=0; j<ip; j++)
            {
                base[i][j] = 1;
            }
        }
    }
    for(int i=0; i<c; i++)
    {
        int ip;
        cin>>ip;
        if(ip != 0)
        {
            for(int j=0; j<ip; j++)
            {
                base[j][i] = 1;
            }
        }
    }

    long cnt=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i != 0 && j != 0 && base[i][j] != 1)
            {
                /* Check for row continuity */
                int k = j;
                int flag_row = 1;
                while(k-->0)
                {
                    if(base[i][k] != 1)
                    {
                        flag_row = 0;
                        break;
                    }
                }

                /* Check for column continuity */
                k = i;
                int flag_col = 1;
                while(k-->0)
                {
                    if(base[k][j] != 1)
                    {
                        flag_col = 0;
                        break;
                    }
                }

                if(flag_row == 0 && flag_col == 0)
                {
                    cnt++;
                }
            }
        }
    }

    if(cnt == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<((long)pow(2,cnt) % 1000000007)<<endl;
    }

    return 0;
}