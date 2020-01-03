#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int bin2dec(string str)
{
    int num = 0;
    int j=0;
    for(int i=str.length()-1; i>=0; i--)
    {
        num += (int)(str[i]-'0') * (int)pow(2,j);
        j++;
    }
    return num;
}

int isZero(string str)
{
    int flag = 1;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != '0')
        {
            flag = 0;
            break;
        }
    }
    
    return flag;
}

string findXor(string a, string b)
{
    string str = "";
    for(int i=0; i<a.length(); i++)
    {
        str += to_string((a[i]-'0') ^ (b[i]-'0'));
    }

    return str;
}

string findAnd(string a, string b)
{
    string str = "";
    for(int i=0; i<a.length(); i++)
    {
        str += to_string((a[i]-'0') & (b[i]-'0'));
    }

    return str;
}

string findLeftShift(string str)
{
    for(int i=0; i<str.length()-1; i++)
    {
        str[i] = str[i+1];
    }
    str[str.length()-1] = '0';

    return str;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string a, b;
        cin>>a>>b;
        
        if(a.length() > b.length())
        {
            int diff = a.length() - b.length();
            while(diff--)
            {
                b = "0" + b;
            }
        }
        else if(b.length() > a.length())
        {
            int diff = b.length() - a.length();
            while(diff--)
            {
                a = "0" + a;
            }
        }
        
        
        int cnt = 0;
        while(!isZero(b))
        {
            // cout<<"---------------------------------------------"<<endl;
            // cout<<a<<endl;
            // cout<<b<<endl;
            string u = findXor(a, b);
            // cout<<u<<endl;
            string v = findAnd(a, b);
            // cout<<v<<endl;
            a = u;
            v = "0" + v;
            b = findLeftShift(v);
            a = "0" + a;
            // cout<<b<<endl;
            cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}