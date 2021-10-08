
#include <stdio.h>
#define MAX 100

double formula(int niza[],int i,int n)
{
    if(i==n)
        return niza[n];
    return niza[i]+(1.0/formula(niza,i+1,n));
}
int main()
{
    int N;
    int niza[MAX];
    double rezultat;
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&niza[i]);

    rezultat=formula(niza,0,N-1);
    printf("%f\n",rezultat);
    return 0;
}
