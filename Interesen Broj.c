

#include <stdio.h>

int prevrten_broj(int n)
{
    int prevrten=0;
    while(n>0)
    {
        prevrten=prevrten*10+n%10;
        n/=10;
    }
    return prevrten;
}

int brojac(int x)
{
    int br=0;
    while(x>0)
    {
        x/=10;
        br++;
    }
    return br;
}

int main()
{
    int broj;
    int interesen;

    scanf("%d",&broj);
    if(broj<10)
        printf("Brojot ne e validen\n");
    else
    {
        for(int i=broj-1;i>0;i--)
        {


            if(prevrten_broj(i)%brojac(i)==0)
            {
                interesen=i;
                break;
            }
        }
    printf("%d\n",interesen);
    }
    return 0;
}

