#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int sum = a*1 + b*2 + c*3;
        if(sum%2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int arr[a+b+c];
            for(int i=0; i<a; i++)
            {
                arr[i] = 1;
            }
            for(int i=a; i<a+b; i++)
            {
                arr[i] = 2;
            }
            for(int i=b; i<a+b+c; i++)
            {
                arr[i] = 3;
            }

            int temp = sum/2;
            if(temp < arr[a+b+c-1])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}