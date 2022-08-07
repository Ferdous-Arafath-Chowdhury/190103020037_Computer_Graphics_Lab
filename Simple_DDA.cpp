
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;



void DDA(int x0, int y0, int X1, int Y1)
{

	int dx = X1 - x0;
	int dy = Y1 - y0;

	int it = max(abs(dx),abs(dy));
	float x_c = dx / (float) it;
	float y_c = dy / (float) it;

	float x = x0;
	float y = y0;

	for (int i=0;i<=it;i++)
	{

	    cout <<  round(x) << " "  << round(y) << endl;

		x += x_c;
		y += y_c;
	}
}

int main()
{
    int x0,y0,x1,y1;
    printf("Enter first coor: ");
    scanf("%d%d", &x0,&y0);
    printf("Enter second coor: ");
    scanf("%d%d", &x1, &y1);

	DDA(x0,y0,x1,y1);
}
