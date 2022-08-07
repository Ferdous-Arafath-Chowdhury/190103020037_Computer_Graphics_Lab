#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


void mid_p_circle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int p = 0;

    while (x >= y)
    {

        cout << x0+x << " " << y0+y << endl ;
        cout << x0+y << " " << y0+x << endl ;
        cout << x0-y << " " << y0+x<< endl ;
        cout << x0-x << " " << y0+y << endl ;
        cout << x0+x << " " << y0-y << endl ;
        cout << x0+-y << " " << y0-x << endl ;
        cout << x0+y << " " << y0-x << endl ;
        cout << x0+x << " " << y0-y << endl ;

        if (p <= 0)
        {
            y += 1;
            p += 2*y + 1;
        }

        if (p > 0)
        {
            x -= 1;
            p -= 2*x + 1;
        }
    }
}

int main()
{
int x, y, radius;

cout << "Enter Radius\n" ;
scanf("%d",&radius);
printf("Enter co-ordinates ");
scanf("%d%d", &x, &y);

mid_p_circle(x, y, radius);

return 0;
}
