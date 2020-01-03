#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a, b, n, s;
        cin>>a>>b>>n>>s;

        int flag = 0;
        if(a*n + b < s)
        {
            // cout<<"NO"<<endl;
        }
        else
        {
            for(;a>=0; a--)
            {
                if(a*n <= s)
                {
                    int req = s - a*n;
                    if(req <= b)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag)
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