#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Student{
	string name;
	int score;
	int top;
}stu[1000];

bool cmp1(Student a,Student b){
	return a.name<b.name;
}
bool cmp2(Student a,Student b){
	return a.score>b.score;
}
int main(){
	int T,n,num=0,top;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			cin>>stu[num].name>>stu[num].score;
			++num;
		}
		sort(stu+num-n,stu+num,cmp2);
		top = 1;
		stu[num-n].top = top;
		for(int j=num-n+1;j<num;j++){
			if(stu[j].score!=stu[j-1].score){
				top = j-(num-n)+1;
			}
			stu[j].top = top;
		}
	}
	sort(stu,stu+num,cmp1);
	for(int i=0;i<num;i++){
		cout<<stu[i].name<<" "<<stu[i].score<<" "<<stu[i].top<<endl;
	}
	return 0;
}

