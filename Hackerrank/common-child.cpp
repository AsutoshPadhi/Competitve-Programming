#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    int arr[n1][n2];
    string str[n1][n2];

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(i == 0)
            {
                if(j == 0)
                {
                    if(s1[i] == s2[j])
                    {
                        // cout<<"1.1.1"<<endl;
                        arr[i][j] = 1;
                        str[i][j] = s1[i];
                    }
                }
                else
                {
                    if(s1[i] == s2[j] && arr[i][j-1] <= i)
                    {
                        // cout<<"1.2.1"<<endl;
                        // cout<<i<<" "<<j<<" "<<s1[i]<<" "<<s2[j]<<endl;
                        arr[i][j] = arr[i][j-1] + 1;
                        str[i][j] = str[i][j-1] + s1[i];
                    }
                    else
                    {
                        // cout<<"1.2.2"<<endl;
                        arr[i][j] = arr[i][j-1];
                        str[i][j] = str[i][j-1];
                    }
                }
            }
            else
            {
                if(j == 0)
                {
                    if(s1[i] == s2[j] && arr[i-1][j] <= j)
                    {
                        arr[i][j] = arr[i-1][j] + 1;
                        str[i][j] = str[i-1][j] + s1[i];
                    }
                    else
                    {
                        arr[i][j] = arr[i-1][j];
                        str[i][j] = str[i-1][j];
                    }
                }
                else
                {
                    if(s1[i] == s2[j] && str[i-1][j] == str[i][j-1] && arr[i][j-1] <= i && arr[i-1][j] <= j)
                    {
                        arr[i][j] = max(arr[i-1][j], arr[i][j-1]) + 1;
                        str[i][j] = str[i-1][j] + s1[i];
                    }
                    else
                    {
                        arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                        if(arr[i-1][j] > arr[i][j-1])
                        {
                            str[i][j] = str[i-1][j];
                        }
                        else
                        {
                            str[i][j] = str[i][j-1];
                        }
                    }
                }
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<str[n1-1][n2-1]<<endl;

    return arr[n1-1][n2-1];
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    cout << result << "\n";

    // fout.close();

    return 0;
}
