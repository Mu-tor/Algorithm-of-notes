#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	do{
		for(int i=0;i<n;i++){
			if(i!=0)    cout<<" ";
			cout<<v[i];
		}
		cout<<endl;
	}while(next_permutation(v.begin(),v.end()));
	return 0;
}

