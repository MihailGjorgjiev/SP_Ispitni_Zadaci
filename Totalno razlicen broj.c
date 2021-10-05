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
int cifra(int n,int x)
{
    for(int i=1;i<=x;i++)
        n/=10;
    n=n%10;
    return n;
}
int main()
{
    int num;
    int vist=1;
    int n,x;

    int br_cifri_i,br_cifri_x;
    int cifra_i,cifra_x;

    scanf("%d %d",&n,&x);

    for(int i=n-1;i>0;i--)
    {

        vist=1;

        br_cifri_i=broj_cifri(i);
        br_cifri_x=broj_cifri(x);

        for(int j=0;j<br_cifri_i;j++)
        {
            cifra_i=cifra(i,j);
            for(int k=0;k<br_cifri_x;k++)
            {
                cifra_x=cifra(x,k);
                if(cifra_i==cifra_x)
                {
                    vist=0;
                    break;
                }

            }
            if(vist==0)
                break;
        }
        if(vist==1)
        {
            num=i;
            break;
        }
    }
    if(vist==0)
    {
         for(int k=0;k<br_cifri_x;k++)
            {
                cifra_x=cifra(x,k);
                if(cifra_x!=0)
                {
                    num=0;
                }
                else
                {
                    vist=0;
                    break;
                }
            }
    }
    printf("%d\n",num);
    return 0;

}
