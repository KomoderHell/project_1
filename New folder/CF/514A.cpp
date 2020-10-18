#include<bits/stdc++.h>
using namespace std;
int main(){
	int d,k=1;
	string n;
	string ans = "";
	cin>>n;
	for(int i=0;i<n.length();i++){
		
		if(n[i]<='4'){
			ans +=  n[i];
		}
		else{
			if(n[i]=='9' && i==0){
			ans +=  n[i];
			}
			else{
			ans +=  '9' - n[i] + '0';
			}
		}
		k*=10;
		}
	cout<<ans;
}
