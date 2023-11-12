#include <stdio.h>
int abs(int a)
{
    if (a >= 0) {return a;}
    else {return -a;}
}
int main()
{
    int xa,ya,xb,yb,xc,yc;
    scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
    char arr[100005] = {0};
    int ans;
    int k = 0;
    if (xa == xb)
    {
        if (ya < yb)
        {
            if (xc != xa || (xc == xa && ((yc < ya) || (yc > yb))))
            {
                ans = abs(ya - yb);
                for (int i = ya+1;i <= yb;i++)
                {
                    arr[k] = 'U';
                    k++;
                }
            }
            else
            {
                ans = abs(ya - yb) + 2;
                for (int i = ya+1;i < yc;i++)
                {
                    arr[k] = 'U';
                    k++;
                }
                arr[k] = 'R';
                k++;
                arr[k] = 'U';
                k++;
                arr[k] = 'U';
                k++;
                arr[k] = 'L';
                k++;
                for (int i = yc+1;i < yb;i++)
                {
                    arr[k] = 'U';
                    k++;
                }
            }
        }
        else
        {
            if (xc != xa || (xc == xa && ((yc < yb) || (yc > ya))))
            {
                ans = abs(ya - yb);
                for (int i = ya-1;i >= yb;i--) ///
                {
                    arr[k] = 'D';
                    k++;
                }
            }
            else
            {
                ans = abs(ya - yb) + 2;
                for (int i = ya-1;i > yc;i--) ///
                {
                    arr[k] = 'D';
                    k++;
                }
                arr[k] = 'R';
                k++;
                arr[k] = 'D';
                k++;
                arr[k] = 'D';
                k++;
                arr[k] = 'L';
                k++;
                for (int i = yc-1;i > yb;i--) ///
                {
                    arr[k] = 'D';
                    k++;
                }
            }
        }
    }
    else if (ya == yb)
    {
        if (xa < xb)
        {
            if (yc != ya || (yc == ya && ((xc < xa) || (xc > xb))))
            {
                ans = abs(xa - xb);
                for (int i = xa+1;i <= xb;i++)
                {
                    arr[k] = 'R';
                    k++;
                }
            }
            else
            {
                ans = abs(xa - xb) + 2;
                for (int i = xa+1;i < xc;i++)
                {
                    arr[k] = 'R';
                    k++;
                }
                arr[k] = 'D';
                k++;
                arr[k] = 'R';
                k++;
                arr[k] = 'R';
                k++;
                arr[k] = 'U';
                k++;
                for (int i = yc+1;i < yb;i++)
                {
                    arr[k] = 'R';
                    k++;
                }
            }
        }
        else
        {
            if (yc != ya || (yc == ya && ((xc < xb) || (xc > xa))))
            {
                ans = abs(xa - xb);
                for (int i = xa-1;i >= xb;i--) ///
                {
                    arr[k] = 'L';
                    k++;
                }
            }
            else
            {
                ans = abs(xa - xb) + 2;
                for (int i = xa-1;i > xc;i--) ///
                {
                    arr[k] = 'L';
                    k++;
                }
                arr[k] = 'D';
                k++;
                arr[k] = 'L';
                k++;
                arr[k] = 'L';
                k++;
                arr[k] = 'U';
                k++;
                for (int i = xc-1;i > xb;i--) ///
                {
                    arr[k] = 'L';
                    k++;
                }
            }
        }
    }
    else
    {
        ans = abs(xa - xb) + abs(ya - yb);
        if (xa < xb)
        {
            if (ya < yb)
            {
                if (yc == yb && xc >= xa && xc <= xb) 
                {
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                }
                else if (yc == ya && xc >= xa && xc <= xb)
                {
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                }
                else
                {
                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                }
            }
            else
            {
                if (yc == yb && xc >= xa && xc <= xb) 
                {
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'D';
                        k++;
                    }
                }
                else if (yc == ya && xc >= xa && xc <= xb)
                {
                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'D';
                        k++;
                    }
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                }
                else
                {
                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                    for (int i = xa+1;i <= xb;i++)
                    {
                        arr[k] = 'R';
                        k++;
                    }
                }
            }
        }
        else 
        {
            if (ya < yb)
            {
                if (yc == yb && xc >= xb && xc <= xa) 
                {
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                }
                else if (yc == ya && xc >= xb && xc <= xa)
                {

                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                }
                else 
                {
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                    for (int i = ya+1;i <= yb;i++)
                    {
                        arr[k] = 'U';
                        k++;
                    }
                }
            }
            else 
            {
                if (yc == yb && xc >= xb && xc <= xa) 
                {
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'D';
                        k++;
                    }
                }
                else if (yc == ya && xc >= xb && xc <= xa)
                {

                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'D';
                        k++;
                    }
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                }
                else 
                {
                    for (int i = xb+1;i <= xa;i++)
                    {
                        arr[k] = 'L';
                        k++;
                    }
                    for (int i = yb+1;i <= ya;i++)
                    {
                        arr[k] = 'D';
                        k++;
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    printf("%s",arr);
    return 0;
}