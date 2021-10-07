#include <stdio.h>
#define MAX 10

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	FILE *fin=fopen("livce.txt","r");
	char c;
	int i=0;

	int pari;
	int tip,tip_max;

	float dobivka=1.0;

	float koeficient,koeficient_max=0;

	char sifra[MAX],sifra_max[MAX];

	fscanf(fin,"%d",&pari);
	dobivka*=pari;


	while((c=fgetc(fin))!=EOF)
    {
        if(c=='\n')
        {
            continue;
        }

        if(c!=' ')
        {
            sifra[i]=c;
            i++;
            continue;
        }

        sifra[i]='\0';

        fscanf(fin,"%d",&tip);
        fscanf(fin,"%f",&koeficient);

        dobivka*=koeficient;


        if(koeficient>koeficient_max)
        {
            koeficient_max=koeficient;
            tip_max=tip;

            for(i=0;sifra[i]!='\0';i++)
            {
                sifra_max[i]=sifra[i];
            }

            sifra_max[i]='\0';
        }
            i=0;
    }

    for(i=0;sifra_max[i]!='\0';i++)
    {
        printf("%c",sifra_max[i]);
    }
    printf(" %d %.2f\n",tip_max,koeficient_max);

    printf("%.2f\n",dobivka);
    fclose(fin);
	return 0;

}

