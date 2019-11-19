#include <iostream>
using namespace std;
int main()
{
    int a,a2,a4,a6,a15;
    cin>>a;
    a2=a*a;
    a4=a2*a2;
    cout<<"a^4="<<a4<<endl;
    a6=a4*a2;
    cout<<"a^6="<<a6<<endl;
    a15=a6*a4;
    a15=a15*a;
    cout<<"a^15="<<a15<<endl;
    return 0;
}
