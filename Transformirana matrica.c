#include<stdio.h>
#define MAX 50
int main()
{
    int N;
    int A[MAX][2*MAX];
    int B[2*MAX][MAX];

    scanf("%d",&N);
    for(int i=0;i<N;i++)
        for(int j=0;j<2*N;j++)
        scanf("%d",&A[i][j]);


    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            B[i][j]=A[i][j];


    for(int i=0;i<N;i++)
    {

        for(int j=N;j<2*N;j++)
        {
            B[i+N][j-N]=A[i][j];
        }
    }

    for(int i=0;i<2*N;i++)
    {
        for(int j=0;j<N;j++)
        printf("%d ",B[i][j]);

        putchar('\n');
    }
    return 0;
}

