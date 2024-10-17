#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
int main(){
	int h,a,b,c,d;
    cin>>h>>a>>b;
    d=h-a;
    c=a-b;
    cout<<1+d/c+(d%c+c-1)/c;

}