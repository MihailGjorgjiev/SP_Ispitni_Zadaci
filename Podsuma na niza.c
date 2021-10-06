#include <stdio.h>
#define MAX 100

int sum_pos(int *niza,int ind,int n)
{
    if(ind>n)
    {
        return 0;
    }
    int suma=0;
    for(;ind<n;ind++)
    {
        suma+=*(niza+ind);
    }
    return suma;
}

int main()
{
    int N;
    int niza[MAX];
    int ind;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&niza[i]);
    }
    scanf("%d",&ind);

    printf("%d",sum_pos(niza,ind,N));
    return 0;
}
