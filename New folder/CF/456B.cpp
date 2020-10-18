#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=0;
	
	n += s[s.length()-1] - '0';
	n += (s[s.length() -2] -'0')*10;
	
	if(n%4==0){
		cout<<4;
	} else{
		cout<<0;
	}
}
