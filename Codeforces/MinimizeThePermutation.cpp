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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int visited[n] = {0};
        int done[n] = {0};

        int curr = 1;
        for(int i=0; i<n-1; i++)
        {
            // cout<<"curr = "<<curr<<" done = "<<done[curr-1]<<endl;
            if(arr[curr-1] == curr)
            {
                // cout<<"here"<<endl;
                curr++;
                continue;
            }

            int index;
            for(int j=0; j<n; j++)
            {
                if(arr[j] == curr)
                {
                    index = j;
                    break;
                }
            }
            // cout<<"index = "<<index<<endl;
            
            if(visited[index] != 1)
            {
                visited[index] = 1;
                int temp = arr[index-1];
                arr[index-1] = arr[index];
                arr[index] = temp;
            }

            // for(int i=0; i<n; i++)
            // {
            //     cout<<arr[i]<<" ";
            // }
            // cout<<endl;
        }

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}