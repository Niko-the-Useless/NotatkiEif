#include<iostream>
#include"math_utils.h"

using namespace std;

int main(){
	int x,y;
	cout<<"podaj liczbe a: ";
	cin>>x;
	cout<<endl;
	cout<<"podaj liczbe b: ";
	cin>>y;
	cout<<endl;
	cout<<"GCD "<<x<<" i "<<y<<"="<<gcd(x,y)<<endl;
	cout<<"LCM "<<x<<" i "<<y<<"="<<lcm(x,y)<<endl;
	return 0;
}
