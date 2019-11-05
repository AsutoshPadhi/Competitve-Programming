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

        int div[n] = {0};
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(arr[j] % arr[i] == 0)
                    div[i]++;
            }
        }

        int max = 0;
        for(int i=0; i<n; i++)
        {
            if(div[i] > max)
                max = div[i];
        }

        cout<<max<<endl;
    }

    return 0;
}