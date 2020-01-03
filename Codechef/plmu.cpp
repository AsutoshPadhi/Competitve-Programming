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
            cin>>arr[i];
        
        int cnt0 = 0;
        int cnt2 = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
                cnt0++;
            if(arr[i] == 2)
                cnt2++;
        }

        cout<<((cnt0*(cnt0-1)/2)+(cnt2*(cnt2-1)/2))<<endl;
    }

    return 0;
}