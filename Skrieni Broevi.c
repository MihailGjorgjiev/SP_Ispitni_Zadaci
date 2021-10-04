#include <stdio.h>

int main()
{
    int br;
    int suma;
    int total=0;
    br=getchar();
    do
    {
        int tmp;

        if(br>='0' && br<='9')//0<br<9
        {
            if(tmp>='0' && tmp<='9')//0<tmp<9
            {
                tmp-='0';
                tmp=tmp*10+(br-'0');
                total+=tmp;
            }
            else if(tmp<='0' || tmp>='9')
                tmp=br;
        }

        else if((br<='0' || br>='9') ||br=='!')
        {
            if(tmp>='0' && tmp<='9')
            {
                tmp-='0';
                total+=tmp;
                tmp='a';
            }
        }

        if(br=='!')
            break;
    }while((br=getchar()));


    printf("%d",total);
    return 0;
}

