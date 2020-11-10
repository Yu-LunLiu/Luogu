#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	cout<< fixed  <<  setprecision(3)<<a/b<<endl;
	cout.unsetf( ios::fixed );
	cout<<b*2;
} 
