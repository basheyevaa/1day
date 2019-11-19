#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
    cin>>x>>y;
    if(x>y){
        cout<<"Yes";
    }
    else {
        temp=x;
        x=y;
        y=temp;
     cout<<x<<" "<<y;
    }
    return 0;
}
