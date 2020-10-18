#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count =0,mc=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	do{
	count =0;
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1]){
			a[i]++;
			count ++;
		}
	}
	mc+=count;
	}while(count!=0);
	
	cout<<mc<<endl;
	
}
