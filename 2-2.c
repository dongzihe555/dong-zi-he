#include <stdio.h>
int main()
{
    char str[6] = { '0','0','0','0','0','\0' };
    char mm[4] = { 'E','N','D','\0' };
    char nn[5] = { 'B','A','C','K','\0' };
    char sty[6];
    char ch[6] = "ABCDE";
    int xl[5][5] = { {0,0,0,0,0},{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, };
    int bl[5] = { 0,0,0,0,0 };
    int x = 0, a, b, n, aa, g;
    int c, z, s, l, xx;
    printf("输入货物：");
    scanf_s("%s", str, 6);

    while (str[0] != mm[0] || str[1] != mm[1] || str[2] != mm[2])
    {
        if (str[0] == ch[0]) { x = 1; }
        else if (str[0] == ch[1]) { x = 2; }
        else if (str[0] == ch[2]) { x = 3; }
        else if (str[0] == ch[3]) { x = 4; }
        else if (str[0] == ch[4]) { x = 5; }
        scanf_s("%d %d %d", &a, &b, &n);
        xl[x][a] = xl[x][a] + n;
        bl[x] = b;
        printf("输入货物：");
        scanf_s("%s", str, 6);
    }
    printf("输入购买：");
    scanf_s("%s %d %d", sty, 6, &aa, &g);
    xl[x][a] = xl[x][a] - g;
    if (0 <= xl[x][a])
    {
        z = g * bl[x];
        do
        {
            scanf_s("%d", &xx);
            s = s + xx;
        } while (s < z);
        l = s - z;
        printf("找您%d", l);
    }

    else
    {
        printf("找您%d", l);

    }
    printf("输入购买：");
    scanf_s("%s", sty, 6);
    while (sty[0] != mm[0] || sty[1] != mm[1] || sty[2] != mm[2])
    {   if (sty[0] != nn[0] || sty[1] != nn[1] || sty[2] != nn[2] || sty[3] != nn[3])
         {
            
            aa = c = g = z = s = l = xx = 0;
            scanf_s("%d %d", &aa, &g);
            xl[x][a] = xl[x][a] - g;
            if (0 <= xl[x][a])
            {
                z = g * bl[x];
                do
                {
                    scanf_s("%d", &xx);
                    s = s + xx;
                } while (s < z);
                l = s - z;
                printf("找您%d", l);
            }
            else
            {
                printf("找您%d", l);
            }
         }
        else
         {
          xl[x][a] = xl[x][a] + n;
          aa = c = g = z = s = l = xx = 0;
         }
    }
return 0;
}
