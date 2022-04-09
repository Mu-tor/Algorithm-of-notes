#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node{
	int x,y;
	Node(int x,int y){
		this->x = x;
		this->y = y;
	}
};
bool cmp(Node a,Node b){
	return a.x!=b.x?a.x<b.x:a.y<b.y;
}
int main(){
	int n,x,y;
	vector<Node> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v.push_back(Node(x,y));
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		cout<<v[i].x<<" "<<v[i].y<<endl;
	}
	return 0;
}

