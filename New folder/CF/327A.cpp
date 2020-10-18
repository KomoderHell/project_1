#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp,s=0;
	cin>>n;
	
	vector <int> a;
	
	for(int i =0;i<n;i++){
		cin>>temp;
		s+=temp;
		if(temp==1){
			a.push_back(-1);
		}
		else{
			a.push_back(1);
		}
	}
	
	int m=a[0],mx=a[0];
	
	for(int i=1;i<n;i++){
		mx = max(mx+a[i],a[i]);
		m = max(m,mx);
	}
	
	cout<<s+m;

}
