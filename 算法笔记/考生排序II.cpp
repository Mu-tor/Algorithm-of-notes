#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAXL = 1000;
struct Student{
	string name;
	int Chinese;
	int Math;
}stu[MAXL];

bool cmp1(Student a,Student b){
	return a.Chinese==b.Chinese?a.name<b.name:a.Chinese>b.Chinese;
}
bool cmp2(Student a,Student b){
	return a.Math==b.Math?a.name<b.name:a.Math>b.Math;
}
int main(){
	int T,k;
	scanf("%d%d",&T,&k);
	for(int i=0;i<T;i++){
		cin>>stu[i].name>>stu[i].Chinese>>stu[i].Math;
	}
	k==1?sort(stu,stu+T,cmp1):sort(stu,stu+T,cmp2);
	for(int i=0;i<T;i++){
		cout<<stu[i].name<<" "<<stu[i].Chinese<<" "<<stu[i].Math<<endl;
	}
	return 0;
}
