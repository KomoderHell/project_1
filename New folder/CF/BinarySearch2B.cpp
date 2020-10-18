#include <bits/stdc++.h>
using namespace std;


int n,k;
vector <int> a;	
bool good(double m){
	int s=0;
	for(int i=0;i<n;i++){
		s+= floor(a[i]/m);
	}	
	return s>=k;
}

int main(){
	cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	double res;
	double l=0,h=a[n-1];
	
	for(int i=0;i<100;i++){
		double m=l+(h-l)/2;
		
		if(good(m)){
			res = m;
			l=m;
		}
		else{
			h=m;
		}
	}
	cout<<fixed<<res;
}
