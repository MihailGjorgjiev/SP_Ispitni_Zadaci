/*
Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
да се најде и испечати најмалиот „благ број“.
Ако не постои таков број, да се испечати NE.
*/


#include <stdio.h>

int stepen(int n)
{
    int mnozitel=1;
    for(int i=1;i<=n;i++)
    {
        mnozitel*=10;
    }
    return mnozitel;
}

int main()
{
    int a,b;
    int inx=0;

    scanf("%d%d",&a,&b);
    while(a>=10)
    {
        a/=10;
        inx++;

        while(a%2!=0 || a==0)
        {
            a++;
        }
    }
    while(a%2!=0 || a==0)
    {
        a++;
    }

    a*=stepen(inx);
    if(a<=b)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("NE\n");
    }
    return 0;


}

