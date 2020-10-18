#include<bits/stdc++.h>
using namespace std;
int m,n;
vector <int> t;
vector <int> z;
vector <int> y;

bool good(int mid){
	int s =0;
	for(int i=0;i<n;i++){
		s+= (mid/(t[i]*z[i]  +y[i])) * z[i];
		if((mid%(z[i]*t[i] +y[i]))>=t[i]){
			if(mid%(z[i]*t[i] +y[i])/t[i] <=z[i]){
				s+=mid%(z[i]*t[i] +y[i])/t[i];
			}
			else{
				s+=z[i];
			}
		}
	}
	return s>=m;
}

int main(){
	cin>>m>>n;
	
	t.resize(n);
	z.resize(n);
	y.resize(n);
	
	for(int i=0;i<n;i++){
		cin>>t[i]>>z[i]>>y[i];
	}
	
	int res=-1;
	int low=0;
	int high = 1;
	while(!good(high)) {
		high *= 2;
	}
	while(low<=high){
		int mid= low + (high-low)/2;
		
		if(good(mid)){
			res=mid;
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	
	cout<<res<<endl;
	for(int i=0;i<n;i++){
		int s= (res/(t[i]*z[i]  +y[i])) * z[i];
		if((res%(z[i]*t[i] +y[i]))>=t[i]){
			if(res%(z[i]*t[i] +y[i])/t[i] <=z[i]){
				s+=res%(z[i]*t[i] +y[i])/t[i];
			}
			else{
				s+=z[i];
			}
		}
		if(m>=s){
			cout<<s<<" ";
			m-=s;
		}
		else{
			cout<<m<<" ";
			m=0;
		}
		}
}
