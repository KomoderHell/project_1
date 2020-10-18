#include<bits/stdc++.h>
using namespace std;

int raise(int k, int n){
	int out = 1;
	for(int i=1;i<=n-k-1;i++){
		out*=10;
	}
	return out;
}

vector <int> arrayfy(int n){
	vector <int> a;
	while(n>0){
		a.push_back(n%10);
		n/=10;
	}
	reverse(a.begin(),a.end());
	return a;
}

int main(){
	int n;
	cin>>n;
	
	vector <int> a = arrayfy(n);
	
	vector <int> ans;
	
	
	while(1){
		int temp = 0;
		
		for(int i=0;i<a.size();i++){
			if(a[i]>0){
				temp += raise(i,a.size());
				a[i]--;
			}
		}
		
		if(temp==0){
			break;
		}
		else{
			ans.push_back(temp);
		}
	
	}
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";	
	}
}
