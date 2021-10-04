

#include <stdio.h>
int delitel(int n)
{
    int br=0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
    {
        br+=i;
    }
    return br;
}
int main()
{
    int broj;
    int max_deliteli=0,max_broj=0;
    scanf("%d",&broj);
    for(int i=broj-1;i>0;i--)
    {
        if(delitel(i)>max_deliteli)
        {
            max_broj=i;
            max_deliteli=delitel(i);
        }
    }

    printf("%d\n",max_broj);
    return 0;
}
