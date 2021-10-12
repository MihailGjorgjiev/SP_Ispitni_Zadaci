#include <stdio.h>

int main()
{
    int X,M,N;
    scanf("%d %d %d",&X,&M,&N);
    int matrica[M][N];
    int zbir;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&matrica[i][j]);

    for(int i=0;i<M;i++)
    {
        zbir=0;
        for(int j=0;j<N;j++)
            zbir+=matrica[i][j];

        for(int j=0;j<N;j++)
        {
            if(zbir>X)
                matrica[i][j]=1;

            if(zbir<X)
                matrica[i][j]=-1;

            if(zbir==X)
                matrica[i][j]=0;
        }

    }

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",matrica[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
