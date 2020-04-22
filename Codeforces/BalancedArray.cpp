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
        if(n%4 == 0)
        {
            cout<<"YES"<<endl;
            int i = 0;
            int x = 1;
            while(i<(n/2))
            {
                cout<<2*x<<" ";
                x++;
                i++;
            }
            i = 0;
            x = 1;
            while(i<(n/2))
            {
                if(x != ((n/2)+1))
                {
                    cout<<x<<" ";
                    i++;
                }
                x += 2;
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}