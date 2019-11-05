#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;

        int arr[5] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};

        int cnt = 0;
        while(n-->0)
        {
            int num;
            cin>>num;

            int min = arr[0];
            for(int i=1; i<5; i++)
            {
                if(arr[i] < min)
                {
                    min = arr[i];
                }
            }

            if(num < min)
            {
                cnt++;
            }
            
            for(int i=0; i<4; i++)
            {
                arr[i] = arr[i+1];
            }
            arr[4] = num;
        }

        cout<<cnt<<endl;

    }

    return 0;
}