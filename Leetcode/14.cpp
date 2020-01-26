// Longest Common Prefix


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> strs;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        strs.push_back(s);
    }

    string ans = "";
    int len = strs.size();
    int smallest = strs[0].length();
    for(int i=0; i<len; i++)
    {
        if(strs[i].length() < smallest)
        {
            smallest = strs[i].length();
        }
    }

    for(int i=0; i<smallest; i++)
    {
        char ref = strs[0][i];
        // cout<<"ref = "<<ref<<endl;
        int flag = 1;
        for(int j=0; j<len; j++)
        {
            // cout<<strs[j][i]<<endl;
            if(strs[j][i] != ref)
            {
                flag = 0;
                break;
            }
        }
        if(!flag)
        {
            break;
        }
        ans += ref;
    }

    cout<<ans<<endl;

    return 0;
}