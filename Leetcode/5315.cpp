// Maximum 69 Number

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cin>>num;

    string str = to_string(num);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '6')
        {
            str[i] = '9';
            break;
        }
    }

    cout<<stoi(str)<<endl;

    return 0;
}