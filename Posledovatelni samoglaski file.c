#include <stdio.h>
#include <ctype.h>
#include <string.h>

int vowel(char c)
{
    switch(c)
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':
        return 1;
        break;
        default:
            return 0;
    }
}

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {

  writeToFile();

  // Vasiot kod zapocnuva od tuka
    FILE *fin=fopen("text.txt","r");

    char prva='1',vtora='1';
    int counter=0;
    while((vtora=fgetc(fin))!=EOF)
    {
        vtora=tolower(vtora);
        if(vowel(vtora)==1)
        {
            if(vowel(prva)==1)
            {
                counter++;
                putchar(prva);
                putchar(vtora);
                putchar('\n');
            }


        }
        prva=vtora;

    }
    printf("%d\n",counter);

  return 0;
}
