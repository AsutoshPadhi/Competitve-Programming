#include <iostream>
#include <math.h>

using namespace std;

char diff(char ch1, char ch2)
{
    if(ch1 == 'a' && ch2 == 'b' || ch1 == 'b' && ch2 == 'a')
    {
        return 'c';
    }
    if(ch1 == 'a' && ch2 == 'c' || ch1 == 'c' && ch2 == 'a')
    {
        return 'b';
    }
    if(ch1 == 'b' && ch2 == 'c' || ch1 == 'c' && ch2 == 'b')
    {
        return 'a';
    }
    if(ch1 == 'a' && ch2 == 'a')
    {
        return 'b';
    }
    if(ch1 == 'b' && ch2 == 'b')
    {
        return 'c';
    }
    if(ch1 == 'c' && ch2 == 'c')
    {
        return 'a';
    }
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string str;
        cin>>str;

        int flag = 1;

        if(str.at(0) == '?')
        {
            int index = 1;
            for(int j=1; j<=str.length()-1; j++)
            {
                if(str.at(j) != '?')
                {
                    index = j;
                    break;
                }
            }
        }

        for(int i=1; i<str.length()-1; i++)
        {
            char ch1 = str.at(i-1);
            char ch2 = str.at(i);
            char ch3 = str.at(i+1);

            if(ch2 == ch3 && ch2 != '?')
            {
                flag = 0;
                break;
            }

            if(ch2 == '?')
            {
                int index = i+1;
                for(int j=i+1; j<str.length()-1; j++)
                {
                    if(str.at(j) != '?')
                    {
                        index = j;
                        break;
                    }
                }

                if((index-i)%2 != 0)
                {
                    str.at(i) = diff(ch1, str.at(index));
                }
                else
                {
                    str.at(i) = str.at(index);
                }
            }
        }

        if(flag == 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }

    return 0;
}