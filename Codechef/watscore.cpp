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

        int arr[8] = {0};
        while(n--)
        {
            int p, s;
            cin>>p>>s;
            if(p <=8 && s > arr[p-1])
            {
                arr[p-1] = s;
            }
        }

        int sum = 0;
        for(int i=0; i<8; i++)
        {
            sum += arr[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}