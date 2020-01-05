#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2)
{
    s1 = " " + s1;
    s2 = " " + s2;

    int n1 = s1.length();
    int n2 = s2.length();

    int a[2][n2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n2; j++)
        {
            a[i][j] = 0;
        }
    }

    for(int i=1; i<n1; i++)
    {
        for(int j=1; j<n2; j++)
        {
            if(s1[i] == s2[j])
            {
                a[1][j] = a[0][j-1] + 1;
            }
            else
            {
                if(a[0][j] >= a[1][j-1])
                {
                    a[1][j] = a[0][j];
                }
                else
                {
                    a[1][j] = a[1][j-1];
                }
            }
        }

        for(int j=0; j<n2; j++)
        {
            a[0][j] = a[1][j];
        }
        for(int j=0; j<n2; j++)
        {
            a[1][j] = 0;
        }
    }

    return a[0][n2-1];
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
