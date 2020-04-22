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
        for(int i=2; i<n; i++)
        {
            int k = pow(2,i)-1;
            if(n%k == 0)
            {
                cout<<(n/k)<<endl;
                break;
            }
        }        
    }

    return 0;
}