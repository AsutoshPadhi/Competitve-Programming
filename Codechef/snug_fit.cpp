#include <iostream>
#include <math.h>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);

        long diameter = 0;
        for(int i=0; i<n; i++)
        {
            diameter += min(a[i], b[i]);
        }

        cout<<diameter<<endl;
    }

    return 0;
}