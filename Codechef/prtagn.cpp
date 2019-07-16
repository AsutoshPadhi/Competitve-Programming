#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int countOnes(int num)
{
    int cnt=0;
    while(num!=0)
    {
        cnt += num%2;
        num /= 2;
    }
    return cnt;
}

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int q;
        cin>>q;
        list <int> s;
        list <int> :: iterator it;
        int e=0, o=0;
        while(q-->0)
        {
            int num;
            cin>>num;
            if(s.empty())
            {
                s.push_back(num);
                int cnt = countOnes(num);
                (cnt%2==0)?e++:o++;
                // showlist(s);
            }
            else
            {
                if(!(std::find(s.begin(), s.end(), num) != s.end()))
                {
                    s.push_back(num);
                    int cnt = countOnes(num);
                    (cnt%2==0)?e++:o++;
                    // Iterate
                    for(it = s.begin(); it != s.end() && *it!=num; ++it) 
                    {
                        int x = *it ^ num;
                        cout<<"*it = "<<*it<<" num = "<<num<<" x = "<<(*it ^ num)<<"\n";
                        if(!(std::find(s.begin(), s.end(), (*it ^ num)) != s.end()))
                        {
                            s.push_back(*it ^ num);
                            (countOnes(*it ^ num)%2==0)?e++:o++;
                        }
                    }    
                }
                showlist(s);
            }

            cout<<e<<" "<<o<<"\n";
        }
    }
    return 0;
}