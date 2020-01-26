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
        long a, b, c;
        cin>>n>>a>>b>>c;
        long f[n];
        for(int i=0; i<n; i++)
        {
            cin>>f[i];
        }

        int min = abs(f[0]-a) + abs(f[0]-b);
        for(int i=0; i<n; i++)
        {
            if((abs(f[i]-a) + abs(f[i]-b)) < min)
            {
                min = abs(f[i]-a) + abs(f[i]-b);
            }
        }

        cout<<min+c<<endl;
    }

    return 0;
}