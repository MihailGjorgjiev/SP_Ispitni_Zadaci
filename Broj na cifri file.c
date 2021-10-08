#include <stdio.h>
#include <ctype.h>

void wf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *fin=fopen("input.txt","r");

    char tmp;
    const int MAX=100;
    char arr[MAX],number[MAX];
    int i,j,counter=0;

    while(fgets(arr,MAX,fin))
    {

        if(feof(fin))
        {
            break;
        }

        for(i=0,counter=0;arr[i]!='\n';i++)
        {
            if(isdigit(arr[i]))
            {
                number[counter]=arr[i];
                counter++;
            }
            number[counter]='\0';
        }
        for(i=0;number[i+1]!='\0';i++)
        {
            for(j=i+1;number[j]!='\0';j++)
            {
                if(number[i]>number[j])
                {
                    tmp=number[i];
                    number[i]=number[j];
                    number[j]=tmp;
                }
            }
        }
        printf("%d:",counter);
        puts(number);


    }
    fclose(fin);
    return 0;
}
