#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int l = 0;
    int o = 0;
    int len = str.length();
    int arr[7] = {0};
    for(int i=0; i<len; i++)
    {
        char ch = str[i];
        if(ch == 'b')
        {
            arr[0]++;
        }
        else if(ch == 'a')
        {
            arr[1]++;
        }
        else if(ch == 'l' && !l)
        {
            arr[2]++;
            l = 1-l;
        }
        else if(ch == 'l' && l)
        {
            arr[3]++;
            l = 1-l;
        }
        else if(ch == 'o' && !o)
        {
            arr[4]++;
            o = 1-o;
        }
        else if(ch == 'o' && o)
        {
            arr[5]++;
            o = 1-o;
        }
        else if(ch == 'n')
        {
            arr[6]++;
        }
    }

    int min = arr[0];
    for(int i=0; i<7; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout<<min<<endl;

    return 0;
}