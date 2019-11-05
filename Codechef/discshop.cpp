#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string str;
        cin>>str;
        int flag = 0;
        int index;
        for(int i=0; i<str.length()-1; i++)
        {
            if((str[i] - '0') > (str[i+1] - '0'))
            {
                flag = 1;
                index = i;
                break;
            }
        }
        if(flag == 1)
        {
            string str1 = str.substr(0,index);
            string str2 = str.substr(index+1, str.length());
            int num = stoi(str1+str2);
            cout<<num<<endl;
        }
        else
        {
            cout<<stoi(str.substr(0,str.length()-1))<<endl;
        }
    }

    return 0;
}