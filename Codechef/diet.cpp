#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i <n; i++)
            cin>>arr[i];

        int excess = 0;
        int i;
        int flag = 0;
        for(i=0; i<n; i++)
        {
            if(arr[i]+excess < k)
            {
                flag = 1;
                break;
            }
            int total = excess + arr[i];
            excess = total - k;
        }

        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO "<<i+1<<endl;
        }
    }

    return 0;
}