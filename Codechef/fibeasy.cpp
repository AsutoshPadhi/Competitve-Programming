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

        int cnt=0;
        while(n!=1)
        {
            n /= 2;
            cnt++;
        }

        int index = (int)pow(2,cnt);
        // cout<<"index = "<<index<<endl;

        /*int arr[index];

        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<index; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }*/

        index--;
        int fib = (round)((pow(1.6180339,index)-(pow(0.6180339,index)*pow(-1,index)))/2.236067977);
        // cout<<ceil(fib)<<endl;
        // cout<<ceil((pow(1.6180339,index)-(pow(0.6180339,index)*pow(-1,index)))/2.236067977)<<endl;
        cout<<fib%10<<endl;
    }

    return 0;
}