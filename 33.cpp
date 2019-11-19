#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b;
    cin>>a>>b;
    if(a>=0 && b>=0){
        cout<<sqrt(a-sqrt(b));
    }
    else {
		cout<<"No sq";
	}
return 0;
