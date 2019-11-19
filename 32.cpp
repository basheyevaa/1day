#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cin>>x;
    x=(x-x%100)/10+(x%100)/10;
    cout<<x;
    return 0;
}
