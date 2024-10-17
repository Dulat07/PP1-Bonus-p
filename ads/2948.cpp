#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,h,m,s;
    cin >> a;
    h=(a/3600)%24;
    m=(a/60)%60;
    s=a%60;
    
	
		cout<<h<<":";
	
	 if(m<10){
    	cout<<0<<m<<":";
	}
	else{
		cout<<m<<":";
	}
	 if(s<10){
    	cout<<0<<s;
	}
	else{
		cout<<s;
	}
}

