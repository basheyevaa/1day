#include <iostream>
using namespace std;
int main()
{
    int x,y,z,max=0;
    cin >>x>>y>>z;
    if (x+y>max) max = x+y;
    if (x+z>max) max = x+z;
    if (y+z>max) max = z+y;
    if (max==x+y)cout << x<<" "<<y;
    if (max==x+z)cout << x<<" "<<z;
    if (max==y+z)cout << z<<" "<<y;
}
