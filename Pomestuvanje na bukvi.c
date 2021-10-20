#include <stdio.h>
#define MAX 81

void caesar(char *niza,int x)
{

    int tmp=x;
    if(*niza>='A' && *niza<='Z')
    {
        while(tmp>0)
        {
            (*niza)++;
            tmp--;
            if(*niza>'Z')
            {
                *niza='A';
            }
        }
    }
    else if(*niza>='a' && *niza<='z')
    {
        while(tmp>0)
        {
            (*niza)++;
            tmp--;
            if(*niza>'z')
            {
                *niza='a';
            }
        }
    }
    if(*(niza+1)!='\0')
        caesar(niza+1,x);

}
int main()
{
    int N;
    int X;
    scanf("%d %d",&N,&X);
    char c;
    int i;
    char niza[MAX];
    getchar();
    for(int k=1;k<=N;k++)
    {
    i=0;
    while((c=getchar())!='\n')
    {
        niza[i]=c;
        i++;
    }
    niza[i]='\0';
    caesar(niza,X);
    puts(niza);

    }
}
