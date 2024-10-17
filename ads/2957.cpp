#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
int main(){
	int n,m;
    cin>>n>>m;
    int a1,a2;
    a1=n%m;
    a2=m%n;
    cout<<a1*a2+1;
}