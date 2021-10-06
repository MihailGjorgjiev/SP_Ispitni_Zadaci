
#include <stdio.h>
#include <string.h>
#define MAX 100


void writeToFile() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int najznacajna(int broj)
{
    while(broj>9)
    {
        broj/=10;
    }
    return broj;
}
int main()
{
    writeToFile();

    // vashiot kod ovde
	FILE *fin=fopen("broevi.txt","r");
	int n;
	int i;
	int maxi=0,broj_max;
	while((fscanf(fin,"%d",&n))!=EOF && n!=0)
    {
        if(feof(fin))
        {
            break;
        }
        maxi=0;

        for(int k=1;k<=n;k++)
        {
            fscanf(fin,"%d",&i);
            if(maxi<najznacajna(i))
            {
                maxi=najznacajna(i);
                broj_max=i;
            }
        }
        printf("%d\n",broj_max);
    }
    fclose(fin);
    return 0;

}
