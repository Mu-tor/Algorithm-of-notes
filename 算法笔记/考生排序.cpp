#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAXL = 1000;

struct Student{
	string name;
	int score;
}stu[MAXL];

bool cmp(Student a,Student b){
	return a.score==b.score?a.name<b.name:a.score>b.score;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		cin>>stu[i].name>>stu[i].score;
	}
	sort(stu,stu+T,cmp);
	for(int i=0;i<T;i++){
		cout<<stu[i].name<<" "<<stu[i].score<<endl;
	}
	return 0;
}
