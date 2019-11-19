#include <iostream>
using namespace std;
int main()
{
    int a,b,c, a1, b1;
    cin>>a>>b>>c;
    a1=a;
    b1=b;
    a=a+b;
    b=c-a1;
    c=a1+b1+c;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
