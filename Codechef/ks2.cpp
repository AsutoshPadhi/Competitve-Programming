#include<iostream>
using namespace std;

int checksum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n = n/10;
    }

    if(sum%10 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int num =1;

        for(int i=1; i<=n; )
        {
            if(checksum(num))
            {
                i++;
            }
            num++;
        }

        cout<<--num<<"\n";
    }

    return 0;
}