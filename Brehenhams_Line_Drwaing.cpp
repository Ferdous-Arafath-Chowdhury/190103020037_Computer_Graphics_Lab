#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void Bresen_drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, d, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    d=2*dy-dx;
    while(x<x1)
    {
        x++;
        if(d<0)
        {
            cout << x << " " << y  << endl ;
            d=d+2*dy;
        }

        else
        {
            y++;
            cout << x << " " << y << endl ;

            d=d+2*dy-2*dx;


        }
    }
}


    int main()
    {
        int x0, y0, x1, y1;

        printf("Enter co-ordinates of first point: ");
        scanf("%d%d", &x0, &y0);
        printf("Enter co-ordinates of second point: ");
        scanf("%d%d", &x1, &y1);
        Bresen_drawline(x0, y0, x1, y1);
        return 0;
    }
