#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    int sum = arr[0]+arr[1]+arr[2]+arr[3];
    if(sum%2 != 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        sort(arr, arr+4);
        if(sum/2 >= arr[3])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}