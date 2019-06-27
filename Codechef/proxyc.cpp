#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int s;
        cin>>s;
        char str[s];
        int cnt = 0;
        for(int i=0; i<s; i++)
        {
            cin>>str[i];
            if(str[i] == 'P')
                cnt++;
        }
        if((double)cnt/s >= 0.75)
        {
            cout<<0<<"\n";
        }
        else
        {
            int req = ceil((s*0.75)-cnt);
            int proxy = req;
            int flag=0;

            for(int i=2; i<s-2; i++)
            {
                if(str[i] == 'A')
                {
                    if(((str[i-1]=='P') || (str[i-2]=='P')) && ((str[i+1]=='P') || (str[i+2]=='P')))
                    {
                        req--;
                        if(req == 0)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            
            if(flag==1)
            {
                cout<<proxy<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
            
        }
        
    }

    return 0;
}