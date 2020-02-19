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
        int n;
        cin>>n;
        string score;
        cin>>score;
        int a = 0;
        int b = 0;
        int gd = 0;
        int cnt = 0;

        if(n%2 == 0)
        {
            for(int i=0; i<2*n; i++)
            {
                cnt++;
                if(score[i] == '1')
                {
                    if(i%2 == 0)
                    {
                        a++;
                    }
                    else
                    {
                        b++;
                    }
                }
                gd = abs(a-b);
                // cout<<cnt<<" "<<a<<" "<<b<<" "<<gd<<endl;
                // if(i == n)
                // {
                //     if(score[i] == '1')
                //     {
                //         if(gd > (int)ceil((double)n/2))
                //         {
                //             break;
                //         }
                //     }
                // }

                if(i >= (n) && gd > (int)ceil((double)n/2))
                {
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<2*n; i++)
            {
                cnt++;
                if(score[i] == '1')
                {
                    if(i%2 == 0)
                    {
                        a++;
                    }
                    else
                    {
                        b++;
                    }
                }
                gd = abs(a-b);
                // cout<<cnt<<" "<<a<<" "<<b<<" "<<gd<<endl;

                if(i >= (n) && gd >= (int)ceil((double)n/2))
                {
                    break;
                }
            }
        }
        
        cout<<cnt<<endl;
    }

    return 0;
}