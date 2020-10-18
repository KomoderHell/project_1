#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,r;
	string ans = "";
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a;
		r = 360 / (180 - a);
		if(a == ((r-2)*180)/r ){
			ans += "YES\n";
		}
		else{
			ans += "NO\n";
		}
	}
	cout<<ans;
	
}
