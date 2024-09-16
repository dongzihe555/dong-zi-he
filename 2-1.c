#include <stdio.h>
int main()
{
    char str[6] = { '0','0','0','0','0','\0' };
    char mm[4] = { 'E','N','D','\0' };
    char sty[6];
    
    char ch[6] = "ABCDE";
    int x = 0, a, b, n=1, ba = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, bb, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, bc, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, bd, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, be, e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;
    printf("输入货物：");
    scanf_s("%s ", str, 6);
    while (str[0] !=mm[0]|| str[1] != mm[1] || str[2] != mm[2]  )
    {
       
        scanf_s("%d %d %d", &a, &b, &n);
        if (str[0] == ch[0]) { x = 1; }
        else if (str[0] == ch[1]) { x = 2; }
        else if (str[0] == ch[2]) { x = 3; }
        else if (str[0] == ch[3]) { x = 4; }
        else if (str[0] == ch[4]) { x = 5; }


        if (x == 1)
        {
            ba = b;
            if (a == 1)
            {
                a1 = a1 + n;
            }
            else if (a == 2)
            {
                a2 = a2 + n;
            }
            else if (a == 3)
            {
                a3 = a3 + n;
            }
            else if (a == 4)
            {
                a4 = a4 + n;
            }
            else if (a == 5)
            {
                a5 = a5 + n;
            }
        }
        if (x == 2)
        {
            bb = b;
            if (a == 1)
            {
                b1 = b1 + n;
            }
            else if (a == 2)
            {
                b2 = b2 + n;
            }
            else if (a == 3)
            {
                b3 = b3 + n;
            }
            else if (a == 4)
            {
                b4 = b4 + n;
            }
            else if (a == 5)
            {
                b5 = b5 + n;
            }
        }
        if (x == 3)
        {
            bc = b;
            if (a == 1)
            {
                c1 = c1 + n;
            }
            else if (a == 2)
            {
                c2 = c2 + n;
            }
            else if (a == 3)
            {
                c3 = c3 + n;
            }
            else if (a == 4)
            {
                c4 = c4 + n;
            }
            else if (a == 5)
            {
                c5 = c5 + n;
            }
        }
        if (x == 4)
        {
            bd = b;
            if (a == 1)
            {
                d1 = d1 + n;
            }
            else if (a == 2)
            {
                d2 = d2 + n;
            }
            else if (a == 3)
            {
                d3 = d3 + n;
            }
            else if (a == 4)
            {
                d4 = d4 + n;
            }
            else if (a == 5)
            {
                d5 = d5 + n;
            }
        }
        if (x == 5)
        {
            be = b;
            if (a == 1)
            {
                e1 = e1 + n;
            }
            else if (a == 2)
            {
                e2 = e2 + n;
            }
            else if (a == 3)
            {
                e3 = e3 + n;
            }
            else if (a == 4)
            {
                e4 = e4 + n;
            }
            else if (a == 5)
            {
                e5 = e5 + n;
            }
        }
        printf("输入货物：");
        scanf_s("%s", str, 6);
    }
    printf("输入购买：");
   
    int aa, c = 0, g, z, xx = 0, s = 0, l;

    scanf_s("%s", sty, 6);
    if (sty[0] == ch[0]) { c = 1; }
    else if (sty[0] == ch[1]) { c = 2; }
    else if (sty[0] == ch[2]) { c = 3; }
    else if (sty[0] == ch[3]) { c = 4; }
    else if (sty[0] == ch[4]) { c = 5; }
    while (sty[0] != mm[0] || sty[1] != mm[1] || sty[2] != mm[2])
    {
        scanf_s("%d %d", &aa, &g);
        if (c == 1)
        {
            if (aa == 1)
            {
                a1 = a1 - g;
                if (0 <= a1)
                {


                    z = g * ba;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("a1缺货");
                }
            }
            else if (aa == 2)
            {
                a2 = a2 - g;
                if (0 <= a2)
                {


                    z = g * ba;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("a2缺货");
                }
            }
            else if (aa == 3)
            {
                a3 = a3 - g;
                if (0 <= a3)
                {


                    z = g * ba;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("a3缺货");
                }
            }
            else if (aa == 4)
            {
                a4 = a4 - g;
                if (0 <= a4)
                {


                    z = g * ba;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("a4缺货");
                }
            }
            else if (aa == 5)
            {
                a5 = a5 - g;
                if (0 <= a5)
                {


                    z = g * ba;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("a5缺货");
                }
            }

        }
        if (c == 2)
        {
            if (aa == 1)
            {
                b1 = b1 - g;
                if (0 <= b1)
                {


                    z = g * bb;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("b1缺货");
                }
            }
            else if (aa == 2)
            {
                b2 = b2 - g;
                if (0 <= b2)
                {


                    z = g * bb;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("b2缺货");
                }
            }
            else if (aa == 3)
            {
                b3 = b3 - g;
                if (0 <= b3)
                {


                    z = g * bb;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("b3缺货");
                }
            }
            else if (aa == 4)
            {
                b4 = b4 - g;
                if (0 <= b4)
                {


                    z = g * bb;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("b4缺货");
                }
            }
            else if (aa == 5)
            {
                b5 = b5 - g;
                if (0 <= b5)
                {


                    z = g * bb;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("b5缺货");
                }
            }

        }
        if (c == 3)
        {
            if (aa == 1)
            {
                c1 = c1 - g;
                if (0 <= c1)
                {


                    z = g * bc;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("c1缺货");
                }
            }
            else if (aa == 2)
            {
                c2 = c2 - g;
                if (0 <= c2)
                {


                    z = g * bc;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("c2缺货");
                }
            }
            else if (aa == 3)
            {
                c3 = c3 - g;
                if (0 <= c3)
                {


                    z = g * bc;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("c3缺货");
                }
            }
            else if (aa == 4)
            {
                c4 = c4 - g;
                if (0 <= c4)
                {


                    z = g * bc;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("c4缺货");
                }
            }
            else if (aa == 5)
            {
                c5 = c5 - g;
                if (0 <= c5)
                {


                    z = g * bc;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("c5缺货");
                }
            }

        }
        if (c == 4)
        {
            if (aa == 1)
            {
                d1 = d1 - g;
                if (0 <= d1)
                {


                    z = g * bd;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("d1缺货");
                }
            }
            else if (aa == 2)
            {
                d2 = d2 - g;
                if (0 <= d2)
                {


                    z = g * bd;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("d2缺货");
                }
            }
            else if (aa == 3)
            {
                d3 = d3 - g;
                if (0 <= d3)
                {


                    z = g * bd;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("d3缺货");
                }
            }
            else if (aa == 4)
            {
                d4 = d4 - g;
                if (0 <= d4)
                {


                    z = g * bd;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("d4缺货");
                }
            }
            else if (aa == 5)
            {
                d5 = d5 - g;
                if (0 <= d5)
                {


                    z = g * bd;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("d5缺货");
                }
            }

        }
        if (c ==5)
        {
            if (aa == 1)
            {
                e1 = e1 - g;
                if (0 <= e1)
                {


                    z = g * be;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("e1缺货");
                }
            }
            else if (aa == 2)
            {
                e2 = e2 - g;
                if (0 <= e2)
                {


                    z = g * be;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("e2缺货");
                }
            }
            else if (aa == 3)
            {
                e3 = e3 - g;
                if (0 <= e3)
                {


                    z = g * be;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("e3缺货");
                }
            }
            else if (aa == 4)
            {
                e4 = e4 - g;
                if (0 <= e4)
                {


                    z = g * be;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("e4缺货");
                }
            }
            else if (aa == 5)
            {
                e5 = e5 - g;
                if (0 <= e5)
                {


                    z = g * be;
                    do
                    {
                        scanf_s("%d", &xx);
                        s = s + xx;
                    } while (s < z);
                    l = s - z;
                    printf("找您%d", l);
                    aa = c = g = z = s = l = xx = 0;


                }
                else
                {
                    printf("e5缺货");
                }
            }

        }
        


        printf("\n输入购买：");
        scanf_s("%s", sty, 6);
        if (sty[0] == ch[0]) { c = 1; }
        else if (sty[0] == ch[1]) { c = 2; }
        else if (sty[0] == ch[2]) { c = 3; }
        else if (sty[0] == ch[3]) { c = 4; }
        else if (sty[0] == ch[4]) { c = 5; }


    }
    return 0;
}


   
