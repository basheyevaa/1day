#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x%5==0 && y%5==0 && z%5==0){
        cout<<x+y+z;
    }
    else if(x%5==0 && y%5==0 && z%5!=0) {
        cout<<x+y;
    }
    else if (y%5==0 && z%5==0 && x%5!=0) {
        cout<<y+z;
    }
    else if( x%5==0 && z%5==0 && y%5!=0){
        cout<<x+z;
    }
    else {
        cout<<"error";
    }
    return 0;
}
