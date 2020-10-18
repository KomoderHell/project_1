#include<bits/stdc++.h>
using namespace std;

double f(double x){
	return x*x + sqrt(x);
}

int main(){
	double c;
	cin>>c;
	
	double l=0,h=1;
	while(f(h)-c<0){
	h*=2;
	}

	double res=0;
	for(int i=0;i<100;i++){
		double m = l+(h-l)/2;
		if(f(m)>c){
			h=m;
		}else {
			l=m;
		}
		
		if(abs(f(m)-c) <= 0.000001){
			res = m;
		}
		
	}
	
	cout<<fixed<<res;
	
}
