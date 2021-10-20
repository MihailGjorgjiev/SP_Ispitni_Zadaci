#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    float A[n][n],B[n][n];
    float X=0,Y=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=0 &&j<i)
            {
                X+=A[i][j];
            }
            if(i!=0 && j>n-1-i)
            {
                Y+=A[i][j];
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            B[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                B[i][j]+=X;
            }
            if(j==n-1-i)
            {
                B[i][j]+=Y;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%.1f ",B[i][j]);
        }
        printf("\n");
    }
    return 0;

}
