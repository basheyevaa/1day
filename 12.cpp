#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,a;
    cin>>x;
        a=pow(2.7183, x-2)+sin(x)-(pow(x,4)*cos(1.0/x));
    cout<<a;
    return 0;
}
