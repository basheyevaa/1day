#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if((x-y)==100 || (y-x)==100){
        cout<<"Yes";
    }
    else {
     cout<<"No";
    }
    return 0;
}
