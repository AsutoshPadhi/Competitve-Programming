#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a, b;
        cin>>a;
        cin>>b;
        int sum = a+b;

        int arr[10] = {6,2,5,5,4,5,6,3,7,6};

        int total = 0;
        while(sum != 0)
        {
            total += arr[sum%10];
            sum /= 10;
        }

        cout<<total<<endl;
    }

    return 0;
}