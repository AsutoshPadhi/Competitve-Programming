#include <bits/stdc++.h>

using namespace std;

int check(string str)
{
    int cnt = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == str[0])
        {
            cnt++;
        }
    }

    if(cnt == str.length())
    {
        return 1;
    }
    else
    {
        if(cnt == str.length()-1 && str.length()%2 == 1 && str[str.length()/2] != str[0])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

// Complete the substrCount function below.
long substrCount(int n, string s) 
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            string str = s.substr(i,j);
            cout<<str<<" ";
            if(check(str))
            {
                cnt++;
                cout<<"+";
            }
            cout<<endl;
        }
    }

    return cnt;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
