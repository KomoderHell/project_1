#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	long long a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long l=1,h=1;
	
	if(a[0]!=a[n-1]){
		
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			l++;
		}
		else{
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]==a[i-1]){
			h++;
		}
		else{
			break;
		}
	}
	
	}
	else{
		l = n-1;
		l*=n;
		l/=2;
	}
	
	cout<<a[n-1]-a[0]<<" "<<l*h;
	
}
