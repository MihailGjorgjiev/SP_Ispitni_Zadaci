#include <stdio.h>
#define MAX 100

int main()
{
    int m,n;
    int matrica[MAX][MAX];
    float arsr=0;
    float raz=0,maxraz=0;

    scanf("%d %d",&m,&n);
    int niza[m];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           scanf("%d",&matrica[i][j]);


    for(int i=0;i<m;i++)
    {
        raz=0;
        maxraz=-1;
        arsr=0;
        for(int j=0;j<n;j++)
            arsr+=matrica[i][j];

        arsr=arsr/n;
        for(int j=0;j<n;j++)
        {
            raz=arsr-matrica[i][j];
            if(raz<0)
                raz=-raz;
            if(raz>maxraz)
            {
                maxraz=raz;
                niza[i]=matrica[i][j];
            }
        }

    }

    for(int i=0;i<m;i++)
        printf("%d ",niza[i]);

    return 0;

}
