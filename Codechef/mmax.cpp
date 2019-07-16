#include <iostream>
using namespace std;

int mod(string num, int a) 
{ 
    int res = 0; 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        string k;
        cin>>n;
        cin>>k;
        int x = mod(k,n);
        if(x==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            if(n%2!=0)
            {
                int max = n-1;
                double mid = (double)n/2;
                if(x<=max/2)
                {
                    cout<<(x*2)<<"\n";
                }
                else
                {
                    double d = x-mid;
                    cout<<((mid-d)*2)<<"\n";
                }
            }
            else
            {
                int mid = n/2;
                if(x==n/2)
                {
                    cout<<n-1<<"\n";
                }
                else if(x<n/2)
                {
                    cout<<(x*2)<<"\n";
                }
                else
                {
                    double d = x-mid;
                    cout<<((mid-d)*2)<<"\n";
                }
            }
        }
    }
    return 0;
}