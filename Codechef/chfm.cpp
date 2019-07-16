#include<iostream>
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
        long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum += arr[i]; 
        }

        double mean = (double)sum/n;

        int flag = 0;
        for(int i=0; i<n; i++)
        {
            if(mean == (double)(sum-arr[i])/(n-1))
            {
                //cout<<"mean = "<<mean<<" that = "<<(double)(sum-arr[i])/(n-1)<<"\n";
                cout<<(i+1)<<"\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"Impossible"<<"\n";
        }
    }
    return 0;
}