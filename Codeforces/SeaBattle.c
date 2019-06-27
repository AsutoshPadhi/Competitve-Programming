#include <stdio.h>

int main()
{

    int w1,h1,w2,h2,x,total;
    scanf("%d",&w1);
    scanf("%d",&h1);
    scanf("%d",&w2);
    scanf("%d",&h2);

    if(w1==w2)
        x=0;
    else
    {
        x=w1-w2;
    }
    
    total = w1+w2+(2*h1)+(2*h2)+4+x;
    // printf("%d %d %d %d\n",w1,h1,w2,h2);
    printf("%d",total);

    return 0;
}