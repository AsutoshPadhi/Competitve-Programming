#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    t--;
    cout<<(pow(1.6180339,t)-(pow(0.6180339,t)*pow(-1,t)))/2.236067977;

    return 0;
}