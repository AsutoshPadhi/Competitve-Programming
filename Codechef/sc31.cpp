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
        string str[n];
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }

        int arr[10] = {0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<10; j++)
            {
                //cout<<(str[i][j]-'0')<<endl;
                arr[j] = arr[j] ^ (str[i][j]-'0');
            }
        }

        int cnt = 0;
        for(int i=0; i<10; i++)
        {
            if(arr[i] == 1)
                cnt++;
            //cout<<arr[i]<<" ";
        }
        cout<<cnt<<endl;
    }

    return 0;
}