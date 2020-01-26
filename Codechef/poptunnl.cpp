#include <iostream>
#include <math.h>
#include <string>
#include <list>

using namespace std;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, k;
        cin>>n>>k;

        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                arr[i][j] = 0;
            }
        }

        for(int i=0; i<n; i++)
        {
            string str;
            cin>>str;
            for(int j=0; j<n ; j++)
            {
                if(j!=i)
                {
                    if(abs(j-i)<=k && str[j] == '1')
                    {
                        arr[i][j] = 1;
                    }
                }
            }
        }

        // for(int i=0; i<n; i++)
        // {
        //     for(int j=0; j<n; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        list<int> q;
        int visited[n] = {0};
        int dist[n] = {0};

        q.push_back(0);
        visited[0] = 1;

        int cnt = 0;
        int flag = 0;
        while(!q.empty())
        {
            // cout<<"itna"<<endl;
            int u = q.front();
            q.pop_front();
            // cout<<"u = "<<u<<endl;
            // cout<<"cnt = "<<cnt<<endl;
            if(u == n-1)
            {
                flag = 1;
                break;
            }
            else
            {
                //cnt++;
            }

            for(int i=0; i<n; i++)
            {
                if(i!=u && arr[u][i] == 1 && visited[i] == 0)
                {
                    visited[i] = 1;
                    q.push_back(i);
                    // showlist(q);
                    // cnt += abs(u-i);
                    dist[i] = dist[u] + 1;
                }
            }
        }

        if(flag)
        {
            cout<<dist[n-1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}