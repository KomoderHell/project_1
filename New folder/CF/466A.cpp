#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int x= a*n;
	int y = (n/m)*b + (n%m)*a;
	int z = (n/m)*b +b;
	if(x<y){
		if(z<x)
		cout<<z;
		else
		cout<<x;
	}
	else
		if(z<y)
		cout<<z;
		else
		cout<<y;
	
}
