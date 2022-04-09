#include<iostream>
#include<utility>
using namespace std;
int main(){
	pair<int,int> p[2];
	int n,m;
	for(int i=0;i<2;i++){
		cin>>n>>m;
		p[i] = make_pair(n,m);
	}
	cout<<(p[0]<p[1]?"Yes":"No");
	return 0;
}

