#include <stdio.h>
#include <conio.h>

int main(){
    int x, y, xMid, yMid, r, d;
    int gMod, gDriver = DETECT;
    clrscr();
    intigraph(&g_driver,&g_mode,"C:\TURBOC3\\BGI");
    printf("******** MIDPOINT Circle Drawing Algorithm************\n\n");
    printf("\n enter the cooridiants =");
    scanf("%d %d", &xMid, &yMid);
    printf("\n now enter the radius = ");
    scanf("%d",&r);
    x = 0;
    y = r;
    d = 1 -r ;
    do
    {
        putpixel(xMid+x,yMid+y,1);
        putpixel(xMid+y,yMid+x,1);
        putpixel(xMid-y,yMid+x,1);
        putpixel(xMid-x,yMid+y,1);
        putpixel(xMid-x,yMid-y,1);
        putpixel(xMid-y,yMid-x,1);
        putpixel(xMid+y,yMid-y,1);
        putpixel(xMid+x,yMid-y,1);
        if(d<0){
            d+=(2*x)+1;
        }else{
            y = y - 1;
            d += (2*x)-(2*y) + 1;
        }
        x = x + 2;
    }
    while (y>x);
    return 0;
    getch();
}