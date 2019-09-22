#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int score[n], foul[n];
        for(int i=0; i<n; i++)
        {
            cin>>score[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>foul[i];
        }
        int max=0;
        for(int i=0; i<n; i++)
        {
            int points = ((score[i]*20) - (foul[i]*10));
            // cout<<points<<endl;
            if(points<0)
                points = 0;
            if(points>max)
                max = points;
            points = 0;
        }
        cout<<max<<endl;
    }
    return 0;
}