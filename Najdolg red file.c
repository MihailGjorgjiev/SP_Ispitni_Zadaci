#include <stdio.h>

void wf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();

    FILE *fin=fopen("dat.txt","r");
    const int max=100;
    char niza[max],niza_max[max];
    int counter=0,characters,characters_max=0;
    int i;
    int first,last,first_max,last_max;

    while(fgets(niza,max,fin))
    {
        if(feof(fin))
        {
            break;
        }
        counter=0;
        characters=0;
        first=last=0;
        for(i=0;niza[i]!='\n';i++)
        {
            if(niza[i]>='0' && niza[i]<='9')
            {
                counter++;

                if(first==0 && counter==1)
                {
                    first=i;
                }
                last=i;
            }
            characters++;
        }
        if(counter<2 || characters<characters_max)
        {
            continue;
        }
        characters_max=characters;
        first_max=first;
        last_max=last;
        for(i=0;niza[i]!='\n';i++)
        {
            niza_max[i]=niza[i];
        }
        niza_max[i]='\0';

    }
    for(;first_max<=last_max;first_max++)
    {
        printf("%c",niza_max[first_max]);
    }

    fclose(fin);
    return 0;
}

