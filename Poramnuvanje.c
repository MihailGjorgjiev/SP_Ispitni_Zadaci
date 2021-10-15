#include <stdio.h>

int poramnet(int a)
{
    if(a%10==9)
    {
        a/=10;
        a*=10;
        a+=7;;
    }
    if(a<10)
        return a;

    return a%10+10*poramnet(a/10);

}


int main()
{
    int niza[100];
    int m;
    int n=0;
    int tmp;
    while(scanf("%d",&m)==1)
    {
        niza[n]=poramnet(m);
        n++;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(niza[i]>niza[j])
    {
        tmp=niza[i];
        niza[i]=niza[j];
        niza[j]=tmp;
    }

    for(int i=0;i<n && i<5;i++)
    printf("%d ",niza[i]);


    return 0;
}

