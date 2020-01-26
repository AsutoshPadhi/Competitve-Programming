// Reverse a string III

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string ans = "";
    
    int len = str.length();
    string s = "";
    for(int i=0; i<len; i++)
    {
        if(str[i] == ' ')
        {
            reverse(s.begin(), s.end());
            ans += s + " ";
            s = "";
        }
        else if(i == len-1)
        {
            s += str[len-1];
            reverse(s.begin(), s.end());
            ans += s;
            s = "";
        }
        else
        {
            s += str[i];
        }
    }
    cout<<ans<<endl;

    return 0;
}