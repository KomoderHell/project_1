#include <bits/stdc++.h>

using namespace std;

bool cmp1(pair <int , int> a, pair <int , int> b){
	return a.first > b.first ;
}

bool cmp2(pair <int , int> a, pair <int , int> b){
	return a.second > b.second;
}

int main(){
	int n;
	cin>>n;
	vector <pair<int,int> > a;
	int x,y;
	long long ans =0;
	long long cnt =1;
	
	for(int i =0;i<n;i++){
		cin>>x>>y;
		a.push_back(make_pair(x,y));
	}
	
	sort(a.begin(),a.end(),cmp1);

	for(int i=1;i<n;i++){
		if(a[i].first==a[i-1].first){
			cnt++;
		}
		else{
			ans+=(cnt*(cnt-1))/2;
			cnt=1;
		}
	}
	
	ans+=(cnt*(cnt-1))/2;
	cnt=1;
	sort(a.begin(),a.end(),cmp2);		
	for(int i=1;i<n;i++){
		if(a[i].second==a[i-1].second){
			cnt++;
		}
		else{
			ans+=(cnt*(cnt-1))/2;
			cnt=1;
		}
	}
	
	ans+=(cnt*(cnt-1))/2;
	cnt=1;
	
	sort(a.begin(),a.end());
	for(int i=1;i<n;i++){
		if(a[i] == a[i-1]){
			cnt++;
		}
		else{
			ans-=(cnt*(cnt-1))/2;
			cnt=1;
		}
	}
	
	ans-=(cnt*(cnt-1))/2;
	cnt=1;
			
	cout<<ans;
}
