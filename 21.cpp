#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=sqrt(a*a+b*b);
    cout<<"c="<<c<<endl;
    cout<<"S="<<(a*b)/2<<endl;
    cout<<"P="<<a+b+c<<endl;
    return 0;
}
