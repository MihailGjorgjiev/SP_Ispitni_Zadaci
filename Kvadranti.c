#include <stdio.h>

int main()
{
    int N,M;
    int x,y;
    int prv,vtor,tret,cetvrt;
    prv=vtor=tret=cetvrt=0;
    scanf("%d %d",&N,&M);
    int matrica[N][M];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        scanf("%d",&matrica[i][j]);

    scanf("%d %d",&x,&y);

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            vtor+=matrica[i][j];

        for(int j=y;j<M;j++)
            prv+=matrica[i][j];

    }

    for(int i=x;i<N;i++)
    {
        for(int j=0;j<y;j++)
            tret+=matrica[i][j];

        for(int j=y;j<M;j++)
            cetvrt+=matrica[i][j];

    }
    printf("%d %d %d %d\n",prv,vtor,tret,cetvrt);
    return 0;
}
