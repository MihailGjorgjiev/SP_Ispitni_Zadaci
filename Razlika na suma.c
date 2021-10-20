#include <stdio.h>
#define MAX 100

int main()
{
    int matrica[MAX][MAX];
    int m,n;
    int zbir_prv,zbir_vtor,zbir_vk;


    scanf("%d %d",&m,&n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrica[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        int j;
        zbir_prv=zbir_vtor=zbir_vk=0;
        for(j=0;j<n/2;j++)
        {
            zbir_prv+=matrica[i][j];
        }
        j=n/2;
        if(n%2!=0)
        {
            j++;
        }
        for(;j<n;j++)
        {
            zbir_vtor+=matrica[i][j];
        }
        zbir_vk=zbir_prv-zbir_vtor;
        if(zbir_vk<0)
        {
            zbir_vk=-zbir_vk;
        }
        matrica[i][n/2]=zbir_vk;

        if(n%2==0)
        {
            matrica[i][(n/2)-1]=zbir_vk;
        }

    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
