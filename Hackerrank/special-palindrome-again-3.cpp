// Editorial

#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) 
{
    int cnt = 0;
    
    int i = 0;
    int j;
    int c = 0;
    int arr[n] = {0};

    while(i < n)
    {
        j = i + 1;
        c = 1;
        while(j<n && s[i] == s[j])
        {
            c++;
            j++;
        }

        cnt += (c*(c+1))/2;
        arr[i] = c;

        i = j;
    }

    for(int i=1; i<n-1; i++)
    {
        if(s[i] == s[i-1])
        {
            arr[i] = arr[i-1];
        }
        
        if(s[i-1] == s[i+1] && s[i] != s[i-1])
        {
            cnt += min(arr[i-1], arr[i+1]);
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
