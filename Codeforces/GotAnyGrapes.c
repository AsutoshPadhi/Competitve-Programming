#include <stdio.h>

int main()
{

    int a,d,m,g,p,b,total,gp;
    scanf("%d",&a);
    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&g);
    scanf("%d",&p);
    scanf("%d",&b);

    total = g+p+b;
    gp = g+p;

    if(g<a)
    {
        printf("NO");
    }
    else
    {
        g -= a;
        total -= a;
        gp -= a;

        if(gp<d)
        {
            printf("NO");
        }
        else
        {
            total -= d;
            gp -= a;

            if(total<m)
            {
                printf("NO");
            }
            else
            {
                printf("YES");
            }
            
        }
        
    }
    

    return 0;
}