#include <stdio.h>
#define MAX 100
int main()
{
    int m,n;
    int matrica[MAX][MAX];
    int rezultat=0;
    scanf("%d %d",&m,&n);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&matrica[i][j]);


    for(int i=0;i<m;i++)
        for(int j=0;j<n-2;j++)
        {
            if(matrica[i][j]==1 && matrica[i][j+1]==1 && matrica[i][j+2]==1)
            {
                rezultat++;
                break;
            }
        }

    for(int j=0;j<n;j++)
    {

        for(int i=0;i<m-2;i++)
        {
            if(matrica[i][j]==1 && matrica[i+1][j]==1 && matrica[i+2][j]==1)
            {
                rezultat++;
                break;
            }
        }
    }
        printf("%d\n",rezultat);
        return 0;


}
