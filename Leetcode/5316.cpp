// Print words vertically

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    vector<string> v;
    int len = str.length();
    string s = "";
    for(int i=0; i<len; i++)
    {
        if(str[i] != ' ')
        {
            s += str[i];
        }
        else
        {
            v.push_back(s);
            s = "";
        }
        if(i == len-1)
        {
            v.push_back(s);
            s = "";
        }
    }

    int max = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].length() > max)
        {
            max = v[i].length();
        }
    }

    vector<string> ans;
    for(int i=0; i<max; i++)
    {
        string temp = "";
        for(int j=0; j<v.size(); j++)
        {
            if(v[j].length() < max && i >= v[j].length())
            {
                temp += ' ';
            }
            else
            {
                temp += v[j][i];
            }
        }
        ans.push_back(temp);
        temp = "";
    }

    for(int i=0; i<ans.size(); i++)
    {
        int flag = 1;
        reverse(ans[i].begin(), ans[i].end());
        string n = "";
        for(int j=0; j<ans[i].length(); j++)
        {
            if(ans[i][j] == ' ' && flag)
            {
                // nop
            }
            else
            {
                flag = 0;
                n += ans[i][j];
            }
        }
        reverse(n.begin(), n.end());
        ans[i] = n;
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}