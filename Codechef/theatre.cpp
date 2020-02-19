#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int zero(int arr[4][4])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(arr[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    int total = 0;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[4][4];
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                arr[i][j] = 0;
            }
        }
        for(int i=0; i<n; i++)
        {
            char ch;
            int num;
            cin>>ch>>num;
            if(num == 12)
                arr[ch-'A'][0]++;
            if(num == 3)
                arr[ch-'A'][1]++;
            if(num == 6)
                arr[ch-'A'][2]++;
            if(num == 9)
                arr[ch-'A'][3]++;    
        }
        // for(int i=0; i<4; i++)
        // {
        //     for(int j=0; j<4; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int paise[] = {100, 75, 50, 25};
        int visited[4] = {0};

        int cnt = 0;
        int profit = 0;
        int profit_cnt = 0;
        while(cnt!=4 || !zero(arr))
        {
            int max = arr[0][0];
            int i_max = 0, j_max = 0;
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(max < arr[i][j])
                    {
                        max = arr[i][j];
                        i_max = i;
                        j_max = j;
                    }
                }
            }
            if(max == 0)
            {
                break;
            }

            profit += paise[profit_cnt++] * max;

            for(int i=0; i<4; i++)
            {
                arr[i][j_max] = 0;
            }
            for(int i=0; i<4; i++)
            {
                arr[i_max][i] = 0;
            }

            visited[i_max] = 1;
            cnt++;
        }
        for(int i=0; i<4; i++)
        {
            if(visited[i] == 0)
            {
                profit -= 100;
            }
        }

        cout<<profit<<endl;
        total += profit;
    }
    cout<<total<<endl;

    return 0;
}