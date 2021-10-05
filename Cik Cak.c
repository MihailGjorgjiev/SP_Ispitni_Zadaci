#include <stdio.h>

int broj_na_cifri(int n)
{
    int br=0;
    while(n>0)
    {
        br++;
        n/=10;
    }
    return br;
}

int stepen(int x)
{
    int k=1;
    for(int i=1;i<=x;i++)
        k*=10;
    return k;
}

int zigzag_pogolemo(int n,int x)
{
    int vist=1;
    for(int i=x-2;i>0;i-=2)
    {
        if((n/stepen(i))%10<(n/stepen(i-1)%10));
            else
            {
                vist=0;
                break;
            }
        if((n/stepen(i-1))%10>(n/stepen(i-2)%10));
        else if(i>1)
        {

            vist=0;
            break;
        }

    }
    return vist;
}

int zigzag_pomalo(int n,int x)
{
    int vist=1;
    for(int i=x-2;i>0;i-=2)
    {
        if((n/stepen(i))%10>(n/stepen(i-1)%10));
            else
            {
                vist=0;
                break;
            }
        if((n/stepen(i-1))%10<(n/stepen(i-2)%10));
        else if(i>1)
        {
            vist=0;
            break;
        }

    }
    return vist;
}

int main()
{
    int broj;
    int cifra_prva,cifra_vtora,br_cifri;
    int boolean;
    while(scanf("%d",&broj))
    {
        if(broj<10)
            continue;
        else
        {
            br_cifri=broj_na_cifri(broj);
            cifra_prva=broj/stepen(br_cifri-1);
            cifra_vtora=(broj/stepen(br_cifri-2))%10;
            if(cifra_prva>cifra_vtora)
            {
                boolean=zigzag_pogolemo(broj,broj_na_cifri(broj));
            }
            else if(cifra_prva<cifra_vtora)
            {
                boolean=zigzag_pomalo(broj,broj_na_cifri(broj));
            }
            else
                boolean=0;
        }
        if(boolean==1)
            printf("%d\n",broj);
    }


    return 0;
}
