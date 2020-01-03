#include <bits/stdc++.h>

using namespace std;

int check(map<char, int> &dict, int index)
{
    int i=0;
    map<char, int>::iterator itr;
    int prev;
    for (itr = dict.begin(); itr != dict.end(); ++itr) 
    {
        if(itr->second == 0)
        {
            itr->second = prev;
        }
        cout<<"--i = "<<i<<" "<<prev<<" "<<itr->second<<endl;
        if(i == 0)
        {
            cout<<"true"<<endl;
            prev = itr->second;
            i++;
            continue;
        }
        cout<<"here"<<endl;
        if(itr->second != prev)
        {
            return 0;
        }
        cout<<"there"<<endl;

        prev = itr->second;
        i++;
    }

    return 1;
}

// Complete the isValid function below.
string isValid(string s) 
{
    int arr[26] = {0};
    map<char, int> dict;
    for(int i=0; i<s.length(); i++)
    {
        arr[(s[i]-'0')-49]++;
        auto itr = dict.find(s[i]);
        if(itr == dict.end())
        {
            dict.insert(pair<char, int> (s[i], 1));
        }
        else
        {
            itr->second += 1;
        }
    }

    // map<char, int>::iterator itr; 
    // cout << "\nThe map gquiz1 is : \n"; 
    // cout << "\tKEY\tELEMENT\n"; 
    // for (itr = dict.begin(); itr != dict.end(); ++itr) { 
    //     cout << '\t' << itr->first 
    //          << '\t' << itr->second << '\n'; 
    // } 
    // cout << endl; 

    map<char, int>::iterator itr;
    int i=0;
    if(check(dict, i))
    {
        return "YES";
    }
    else
    {
        for (itr = dict.begin(); itr != dict.end(); ++itr) 
        {
            itr->second--;
            if(check(dict, i))
            {
                cout<<"i = "<<i<<endl;
                map<char, int>::iterator itr1; 
                cout << "\nThe map gquiz1 is : \n"; 
                cout << "\tKEY\tELEMENT\n"; 
                for (itr1 = dict.begin(); itr1 != dict.end(); ++itr1) { 
                    cout << '\t' << itr1->first 
                        << '\t' << itr1->second << '\n'; 
                } 
                cout << endl; 
                return "YES";
            }
            itr->second++;
            i++;
        }
        return "NO";
    }
    
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
