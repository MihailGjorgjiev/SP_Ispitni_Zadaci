#include <stdio.h>
#define MAX 80
void WriteToFile()
{
    FILE *f=fopen("podatoci.txt","w");
    char c;
    while((c=getchar())!='#')
    {
        fputc(c,f);
    }
    fclose(f);
}
int main()
{
    WriteToFile();

    FILE *fin=fopen("podatoci.txt","r");
    char z1,z2;
    char niza[MAX];
    int i,boolean=1;

    z1=getchar();
    if(z1=='\n' || z1==' ')
    {
        z1=getchar();
    }
    z2=getchar();

    while((fgets(niza,MAX,fin)))
    {

        if(feof(fin))
        {
            break;
        }
        i=0;
        boolean=1;
        while(niza[i]!=z2)
        {
            if(boolean && niza[i]!=z1)
            {
                i++;
                continue;
            }
            else if (boolean)
            {
                i++;
                boolean=0;
            }

            putchar(niza[i]);
            i++;
        }
        putchar('\n');

    }

    fclose(fin);
}
