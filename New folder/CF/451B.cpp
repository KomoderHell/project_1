#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	int i=0,l=0,r=0;
	
	for(i;i<n-1;i++){
		if(a[i]>a[i+1]){
			cout<<i<<" "<<a[i]<<" "<<a[i+1]<<endl;
			
			l=i;
			i++;
			break;
		}
	}
	cout<<l<<endl;
	
	for(i;i<n-1;i++){
			cout<<i<<" "<<a[i]<<" "<<a[i+1]<<endl;
		if(a[i]<a[i+1]){
			r=i;
			i++;
			break;
		}
	}
	cout<<r<<endl;
	for(i;i<n-1;i++){
		if(a[i]>a[i+1]){
			cout<<"no";
			return 0;
		}
	}
	
	if(l==0){
		if(a[l]>a[r+1]){
			cout<<"no";
			return 0;
		}
	}
	
	if(r==0){
		if(a[r]<a[l-1]){
			cout<<"no";
			return 0;
		}
	}
	
	cout<<"yes\n"<<l+1<<" "<<r+1;
	
	
	
}
