#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	c=a*b%109;
	cout<<(c+109)%109; 
}