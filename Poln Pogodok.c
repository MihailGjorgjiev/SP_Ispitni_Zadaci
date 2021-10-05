#include <stdio.h>
int main()
{
    unsigned int heksa;
    int zbir=0,eden=0,sest=0;//zbir e suma na site cifri
    while(scanf("%x",&heksa))
    {
        zbir+=heksa;
    }
    sest=zbir%10;
    eden=(zbir/10)%10;
    if(zbir%16==0)
    {
        if(eden==1 && sest==6)
            printf("Poln pogodok\n");
        else
            printf("Pogodok\n");

    }
    else
    {
        printf("%d\n",zbir);
    }
        return 0;
}
