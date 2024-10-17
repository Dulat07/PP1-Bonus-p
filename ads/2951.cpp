#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int a,z,x;
	cin >> a >> z >> x;
	cout << (a*x)+(z*x)/100<<" "<<(z*x)%100;
}