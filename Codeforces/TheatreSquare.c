#include <stdio.h>
#include <math.h>

int main()
{

    long int n,m,a;
    scanf("%ld %ld %ld",&n,&m,&a);

    double minl = ceil((double)n/a);
    double minr = ceil((double)m/a);
    // printf("%f %f\n",minl,minr);

    printf("%ld\n",(long int)((long int)minl*minr));

    return 0;
}