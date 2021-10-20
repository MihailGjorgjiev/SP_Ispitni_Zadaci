#include <stdio.h>
int funkcija(int n)
{
    if(n>0)
    {
        int pom=(funkcija(n/10))%10;
        if(n%10>pom)
            return n%10;

        return pom;
    }
}

int main()
{
    int m;
    int najgolema_cifra;
    while(scanf("%d",&m)==1)
    {
        najgolema_cifra=funkcija(m);
        printf("%d\n",najgolema_cifra);

    }

    return 0;
}
