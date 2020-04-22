#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int checkSame(int a, int b)
{
    if((a<0 && b<0) || (a>0 && b>0))
    {
        return 1;
    }
    return 0;
}

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
        {
            cin>>arr[i];
        }

        vector<int> v;
        long ans = 0;
        for(int i=0; i<n; i++)
        {
            if((i+1 != n) && checkSame(arr[i], arr[i+1]))
            {
                v.push_back(arr[i]);
            }
            else
            {
                v.push_back(arr[i]);
                // cout<<*max_element(v.begin(), v.end())<<" ";
                ans += *max_element(v.begin(), v.end());
                v.clear();
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}