#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<x;
    }
    else if(y>x && y>z) {
        cout<<y;
    }
    else if (z>x && z>y) {
        cout<<z;
    }
    else {
        cout<<equal;
    }
    return 0;
}
