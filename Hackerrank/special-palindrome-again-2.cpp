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
    
    return 0;
}

// Complete the substrCount function below.
long substrCount(int n, string s) 
{
    int cnt = 0;
    string str = "";
    for(int i=0; i<n; i++)
    {
        cnt++;
        str += s[i];

        int j = i-1;
        while(j >= 0 && str[i] == str[j])
        {
            cnt++;
            j--;
        }
        if(j > 0)
        {
            string str2 = str.substr(j+1, i-j);
            str2 += str.substr(2*j-i, i-j);
            if(check(str2))
            {
                cnt++;
            }
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
