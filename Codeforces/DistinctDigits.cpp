#include <iostream>

using namespace std;

int checker(int num)
{
    int arr[10] = {0};
    while(num>0)
    {
        arr[num%10]++;
        num /= 10;
    }

    for(int i=0; i<10; i++)
    {
        if(arr[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;

    int flag = 0;
    int num;
    for(int i=n1; i<=n2; i++)
    {
        if(checker(i))
        {
            flag = 1;
            num = i;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<num<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}