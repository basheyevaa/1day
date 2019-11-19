#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,a;
    cin>>x;
    if((x-5)<0) {
        a=((x-5)*(-1.0)-sin(x))/3+(sqrt(pow(x,2)+2014))*cos(2*x)-3;
    }
    else {
        a=((x-5)-sin(x))/3+((sqrt(pow(x,2)+2014))*cos(2*x)-3);
        
    }
    cout<<a;
    return 0;
}
