#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int cnt=0, flag=1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]-(i+1)>2)
            {
                cout<<"Too chaotic\n";
                flag=0;
                break;
            }
            int diff;
            if(arr[i]>(i+1))
            {
                diff = arr[i]-(i+1);
                cnt += diff;
                // i += diff;
            }
            else if(arr[i]<(i+1) && (i+1)-arr[i]>2)
            {
                cnt++;
            }
        }

        if(flag==1)
        {
            cout<<cnt<<"\n";
        }
    }

    return 0;
}