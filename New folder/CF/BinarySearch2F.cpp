#include<bits/stdc++.h>
using namespace std;
string a,b;
vector<string> str;


bool good(int m){
	int j=0;
	for(int i=0;i<a.length();i++){
		if(b[j]==str[m][i]){
			j++;
			if(j>=b.length()){
				return true;
			}
		}
	}
	return false;

}


int main(){
	cin>>a>>b;
	
	int n= a.length();
	int c;
	str.resize(n);
	string temp = a;
	for(int i=0;i<n;i++){
		cin>>c;
		temp[c-1] = '#';
		str[i] = temp;
	//	cout<<str[i]<<" "<<c<<" "<<temp<<endl;
	}
	
	int l=0,h=n-1,res=-1;
	int m;
	while(l<=h){
		m = l +(h-l)/2;
		
		if(good(m)){
			res = m;
			l=m+1;
		}else{
			h=m-1;
		}
		
	}
	cout<<res+1;
}
