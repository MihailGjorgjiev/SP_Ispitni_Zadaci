#include <stdio.h>
int main()
{
    int z;
    int a,b;
    int brojac=0;//brojot na zbirovi = z
    int vk_parovi=0;
float avg;
    scanf("%d",&z);

    while(scanf("%d%d",&a,&b))
    {

        if(a!=0 || b!=0)
        {
            vk_parovi++;
            if(a+b==z)
                brojac++;
        }
        else
            break;
    }
    avg=(float)brojac/vk_parovi*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",brojac,z,z,avg);
    return 0;
}
