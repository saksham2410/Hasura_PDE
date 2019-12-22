#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	unordered_map<int,string> um;
	unordered_map<int,string> :: iterator it;
	int x;
	string y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		um[x]=y;
	}
	
	unordered_map<int, vector<string> > um1;
	for(int i=1;i<=n;i++){
		for(it=um.begin();it!=um.end();it++){
			if(i%it->first==0){
				um1[i].push_back(it->second);
			}
		}
		
		if(um1[i].size()==0){
			cout<<i<<"\n";
		}
		else{
			for(int j=0;j<um1[i].size();j++){
				cout<<um1[i][j];
			}
			cout<<"\n";
		}
	}
	
	
	
	return 0;
}\