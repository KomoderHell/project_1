#include<bits/stdc++.h>
using namespace std;

long long t[1000001];

void seive(){
	t[0] = -1;
	t[1] = -1;
	for(int i=2;i*i<1000000;i++){
		for(int j =i*i;j<=1000000;j+=i){
			t[j] = -1;
		}
	}
	for(long long i=2;i<1000000;i++){
		if(t[i]==0){
			t[i] = i*i;
		}
	}
//	cout<<t[999983]<<endl;
}
//1000000
//999983

int main(){
	
	seive();
	int n;
	cin>>n;
	long long a[n];
	string ans = "";
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		int k =sqrt(a[i]);
//		cout<<k<<" "<<t[k]<<endl;
		if(t[k]==a[i]){
			ans += "YES\n";
		}
		else {
			ans +="NO\n";
		}
	}
	
	cout<<ans;
	
	
}
