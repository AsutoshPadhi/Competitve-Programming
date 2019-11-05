#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    string num;
    cin>>num;
    int cnt=0;

    for(int i=0; i<num.length(); i++)
    {
        if(k == 0)
        {
            break;
        }
        if(i==0)
        {
            if(num[i] != '1')
            {
                
                num[i] = '1';
                cnt++;
            }
            if(num.length() == 1)
            {
                num[0] = '0';
                break;
            }
        }
        else
        {
            if(num[i] != '0')
            {
                num[i] = '0';
                cnt++;
            }
        }

        // cout<<i<<" "<<num<<" "<<cnt<<endl;

        if(cnt == k)
        {
            break;
        }
    }

    cout<<num<<endl;

    return 0;
}