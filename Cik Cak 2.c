#include <stdio.h>
int broj_na_cifri(int n)//broj vnesen os SV, presmetuva broj na cifri na daden broj
{
    int cifri=0;
    while(n>0)
    {
        cifri++;
        n/=10;
    }
    return cifri;//broj na cifri
}

int stepen(int x)
{
    int a=1;
    while(x>0)
    {
        a*=10;
        x--;
    }
    return a;
}


int zig_zag_pomalo(int n,int x)//n=broj cija prva cifra >=5,x=broj na cifri
{
    int cifra;
    int vist=0;
    for(int i=x-1;i> 0;i-=2)
    {
        cifra=(n/stepen(i))%10;
        if(cifra<5)
        {
            vist=1;
            if(i>0)
            {
                cifra=(n/stepen(i-1))%10;
                if(cifra>=5)
                    vist=1;
                else
                {
                    vist=0;
                    return vist;
                }

            }
        }
        else
        {
            vist=0;
            return vist;
        }
    }
    return vist;
}

int zig_zag_pogolemo(int n,int x)//n=broj cija prva cifra <  5,x=broj na cifri
{
    int cifra;
    int vist=0;
    for(int i=x-1;i>0;i-=2)
    {
        cifra=(n/stepen(i))%10;
        if(cifra>=5)
        {
            vist=1;
            if(i>0)
            {
                cifra=(n/stepen(i-1))%10;
                if(cifra<5)
                    vist=1;
                else
                {
                    vist=0;
                    return vist;
                }

            }
        }
        else
        {
            vist=0;
            return vist;
        }

    }
    return vist;
}

int main()
{
    int broj;
    while(scanf("%d",&broj)==1)
    {
        int pet;
        if(broj>9)
        {
            pet=broj/stepen(broj_na_cifri(broj)-1);
            if(pet>=5)
                if(zig_zag_pogolemo(broj,broj_na_cifri(broj))==1)
                printf("%d\n",broj);

            if(pet<5)
                if(zig_zag_pomalo(broj,broj_na_cifri(broj))==1)
                printf("%d\n",broj);

        }
    }
    return 0;
}

