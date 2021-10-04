#include <stdio.h>

int broj_cifri(int n)
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

int main()
{
    int vist=1;
    int tmp;
    int broj1,broj2;//SV
    int br_cifri_broj1,br_cifri_broj2;
    int cifra1,cifra2;


    scanf("%d %d",&broj1,&broj2);
    if(broj1<=0 || broj2<=0)
    {
        printf("Invalid input\n");
        return 0;
    }
    else
    {
        if(broj2>broj1)//go zemame broj1 da bide pogolemiot
        {
            tmp=broj1;
            broj1=broj2;
            broj2=tmp;
        }
        br_cifri_broj1=broj_cifri(broj1);
        br_cifri_broj2=broj_cifri(broj2);

        for(int i=br_cifri_broj2;i>0;i--)
        {

            if(br_cifri_broj1%2!=0)
                cifra1=(broj1/stepen(br_cifri_broj1-2*i))%10;
            else
                cifra1=(broj1/stepen(br_cifri_broj1+1-2*i))%10;

            cifra2=(broj2/stepen(br_cifri_broj2-i))%10;

            if(cifra1!=cifra2)
            {
                vist=0;
                break;
            }
        }

    }
    if(vist)
        printf("PAREN\n");
    else
        printf("NE\n");



    return 0;
}
