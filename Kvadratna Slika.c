#include <stdio.h>
int main()
{
    int m;
    char a=(char)37;//%
    char b=(char)64;//@
    char c=(char)46;//.

    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0 || j==m-1)
                printf("%c",a);
            else if(i==0 || i==m-1)
                printf("%c",b);
            else
                printf("%c",c);



        }
        printf("\n");

    }
        return 0;
}
