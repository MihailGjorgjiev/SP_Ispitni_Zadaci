#include <stdio.h>
int BrojPozitivni(int niza[], int n);

int main()
{
    int n;
    int rezultat;
    scanf("%d",&n);
    int niza[n];
    for(int i=0;i<n;i++)
        scanf("%d",&niza[i]);

    rezultat=BrojPozitivni(niza,n-1);
    printf("%d\n",rezultat);
    return 0;
}
int BrojPozitivni(int niza[], int n)
{
    if(n==0)
    {
        if(niza[n]>0)
        {

            return 1;
        }

        return 0;
    }
    if(niza[n]>0)
        {

        return 1+BrojPozitivni(niza,n-1);
        }
    else
        return 0+BrojPozitivni(niza,n-1);
}

