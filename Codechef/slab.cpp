#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int sum;
        cin>>sum;
        int rem = sum;
        double tax = 0;

        if(sum > 250000)
        {
            if(sum <= 500000)
            {
                tax += 0.05*(sum - 250000);
            }
            else
            {
                tax += 0.05*(250000);
            }
        }
        if(sum > 500000)
        {
            if(sum <= 750000)
            {
                tax += 0.1*(sum - 500000);
            }
            else
            {
                tax += 0.1*(250000);
            }
        }
        if(sum > 750000)
        {
            if(sum <= 1000000)
            {
                tax += 0.15*(sum - 750000);
            }
            else
            {
                tax += 0.15*(250000);
            }
        }
        if(sum > 1000000)
        {
            if(sum <= 1250000)
            {
                tax += 0.20*(sum - 1000000);
            }
            else
            {
                tax += 0.20*(250000);
            }
        }
        if(sum > 1250000)
        {
            if(sum <= 1500000)
            {
                tax += 0.25*(sum - 1250000);
            }
            else
            {
                tax += 0.25*(250000);
            }
        }
        if(sum > 1500000)
        {
            tax += 0.3*(sum - 1500000);
        }

        cout.setf(ios::fixed);
        cout<<setprecision(0)<<(sum - tax)<<endl;
    }

    return 0;
}