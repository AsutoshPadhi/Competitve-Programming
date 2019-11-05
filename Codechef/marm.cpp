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

        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<k; i++)
        {
            int a = arr[i%n];
            int b = arr[n - (i%n) - 1];
            arr[i%n] = a ^ b;
        }

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}