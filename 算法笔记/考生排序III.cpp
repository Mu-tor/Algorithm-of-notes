#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAXL = 1000;
struct Student{
	string name;
	int Chinese;
	int Math;
	int tol;
}stu[MAXL];

bool cmp1(Student a,Student b){
	return a.Chinese==b.Chinese?a.name<b.name:a.Chinese>b.Chinese;
}
bool cmp2(Student a,Student b){
	return a.Math==b.Math?a.name<b.name:a.Math>b.Math;
}
bool cmp3(Student a,Student b){
	return a.tol==b.tol?a.name<b.name:a.tol>b.tol;
}
int main(){
	int T,k;
	scanf("%d%d",&T,&k);
	for(int i=0;i<T;i++){
		cin>>stu[i].name>>stu[i].Chinese>>stu[i].Math;
		stu[i].tol = stu[i].Chinese+stu[i].Math;
	}
	
	if(k==1){
		sort(stu,stu+T,cmp1);
	}else if(k==2)
		sort(stu,stu+T,cmp2);
	else sort(stu,stu+T,cmp3);
	
	for(int i=0;i<T;i++){
		cout<<stu[i].name<<" "<<stu[i].Chinese<<" "<<stu[i].Math<<" "<<stu[i].tol<<endl;
	}
	return 0;
}
