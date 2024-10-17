#include <iostream>
using namespace std;
int main (){
	int  a;
	cin >> a;
	int x = (a-1)/2;
	int y= (a-1)-x;
	int minut = (x*15)+(y*5)+45*a;
	cout <<9+(minut/60)<<" "<<minut%60;
}
