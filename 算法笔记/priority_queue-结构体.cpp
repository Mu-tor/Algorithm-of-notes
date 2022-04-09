#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct Fruit{
	string name;
	int price;
	friend bool operator < (Fruit f1,Fruit f2){
		return f1.price > f2.price;
	};
}f;
int main(){
	priority_queue<Fruit> q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>f.name>>f.price;
		q.push(f);
	}
	cout<<q.top().name<<" "<<q.top().price;
	return 0;
}

