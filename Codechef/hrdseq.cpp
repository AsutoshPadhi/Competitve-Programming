#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i] = -1;
        arr[0] = 1;
        int cnt[n] = {0};
        cnt[0] = 2;

        int curr = 1;
        int prev = 0;
        //cout<<"0 0 ";
        for(int i=2; i<n; i++)
        {
            //cout<<"i = "<<i<<" curr = "<<curr<<" cnt = "<<cnt[curr]<<" before = "<<arr[curr];
            //cout<<curr<<" ";
            if(cnt[curr] == 0)
            {
                cnt[curr]++;
                arr[curr] = i;
                //cout<<" after = "<<arr[curr]<<endl;
                prev = curr;
                curr = 0;
            }
            else
            {
                cnt[curr]++;
                int prev_index = arr[curr];
                arr[curr] = i;
                //cout<<" after = "<<arr[curr]<<endl;
                prev = curr;
                curr = i - prev_index;
            }
        }
        //cout<<endl;

        if(n == 1)
            cout<<1<<endl;
        else
            cout<<cnt[prev]<<endl;
    }

    return 0;
}