#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, p;
        cin>>n>>p;
        int arr[n];
        int arru[n];
        int ans[n] = {0};
        int div[n] = {0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        if(arr[n-1] > p)
        {
            cout<<"YES ";
            for(int i=0; i<n-1; i++)
            {
                cout<<0<<" ";
            }
            cout<<1<<endl;
            continue;
        }
        
        int target = p;
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i] != 0)
            {
                if(target % arr[i] == 0)
                {
                    ans[i] = target/arr[i] - 1;
                }
                else
                {
                    ans[i] = target/arr[i] + 1;
                    target = 0;
                    break;
                }
                target = target - (arr[i]*ans[i]);
            }
        }
        if(target == 0)
        {
            cout<<"YES ";
            for(int i=0; i<n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}