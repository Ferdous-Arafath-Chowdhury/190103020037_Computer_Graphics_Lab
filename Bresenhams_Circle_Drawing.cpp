#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


void  print_pixel(int x, int y ,int h , int k)
{

    cout << x+h << " " << y+k  << "\n";
    cout << x+h << " " << -y+k << "\n" ;
    cout << -x+h << " " << -y+k << "\n" ;
    cout << -x+h << " " << y+k << "\n" ;
    cout << y+h << " " << x+k << "\n" ;
     cout << y+h << " " << -x+k << "\n" ;
      cout << -y+h << " " << -x+k  << "\n" ;
       cout << -y+h << " " << x+k  << "\n" ;
       // cout << "\n";


}
int main()
{
    int h, k, r;
    cout << "Enter coedinates: \n";
    cin >> h >> k;
      cout << "Enter Radius: \n";
      cin >> r ;

      int x = 0;
      int y = r;
      int d = 3 - 2*r;
      cout << "Cordinats to Color :"  << "\n";
      while(x<=y)
      {
          print_pixel(x,y,h,k);
          if(d>0)
          {
              d = d+ 4*6+ 6;

          }

          else
          {
              d = d+ 4 *x-4*y+10;
              y-- ;
          }
          x++;
      }

}
