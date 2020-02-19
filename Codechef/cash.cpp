#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, k;
        cin>>n>>k;
        long sum = 0;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            sum += temp;
        }
        cout<<sum%k<<endl;
    }

    return 0;
}