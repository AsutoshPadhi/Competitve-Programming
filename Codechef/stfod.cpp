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
        int n;
        cin>>n;
        int s, p, v;
        int max = 0;

        for(int i=0; i<n; i++)
        {
            cin>>s>>p>>v;
            if(((p/(s+1))*v) > max)
            {
                max = ((p/(s+1))*v);
            }
        }

        cout<<max<<endl;
    }

    return 0;
}