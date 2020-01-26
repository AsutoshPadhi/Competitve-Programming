#include <iostream>

using namespace std;

int main()
{
    string A, B;
    cin>>A>>B;

    int flag = 0;
    if(A == B)
    {
        int arr[26] = {0};
        for(int i=0; i<A.length(); i++)
        {
            arr[A[i]-'a']++;
        }
        // for(int i=0; i<26; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0; i<26; i++)
        {
            if(arr[i] > 1)
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        int cnt = 0;
        int i1 = -1, i2 = -1;
        for(int i=0; i<A.length(); i++)
        {
            if(A[i] != B[i])
            {
                cnt++;
                if(i1 == -1)
                {
                    i1 = i;
                }
                else
                {
                    if(i2 == -1)
                    {
                        i2 = i;
                    }
                }
            }
        }
        if(cnt == 2)
        {
            string str = A;
            str[i1] = A[i2];
            str[i2] = A[i1];
            if(str == B)
            {
                flag = 1;
            }
        }
    }
    if(!flag)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }

    return 0;
}