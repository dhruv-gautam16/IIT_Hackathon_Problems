#include <stdio.h>

int main()
{
    int a,b,c,e,f,g,r,d;
    while(scanf("%d %d %d %d", &a,&b,&c,&e) != -1)
    {
    f=c-b;
    g=e-c;
        if (f==0 && g==0)
        {
            r=1;
        }
        else
        {
            r=g/f;
            
        }
    d=b-a*r;
    printf("%d %d %d\n",a,r,d);
    }
    return 0;
}