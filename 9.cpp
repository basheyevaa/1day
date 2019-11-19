#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,a;
    cin>>x;
    if(x<0) {
        a=x*(-1)+pow(x,5);
    }
    else {
        a=x+pow(x,5);
    }
    cout<<a;
    return 0;
}
