#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,d=0,s=0;
	cin>>n;
	while(n>s){
		d+=n-s;
		s= s*10 + 9;
	}
	cout<<d;
}
