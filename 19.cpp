#include <iostream>
using namespace std;
int main()
{
    int kgk, kgp, pokupkaA, pokupkaB;
    cin>>kgk>>kgp;
    pokupkaA=0.3*kgk+0.4*kgp;
    pokupkaB=3*(2*kgp+1.8*kgk);
    cout<<pokupkaA<<endl;
    cout<<pokupkaB;
    return 0;
}
