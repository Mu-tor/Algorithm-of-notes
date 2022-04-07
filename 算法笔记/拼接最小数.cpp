#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10000;
string strs[MAX];
bool cmp(string a,string b){
	return a+b<b+a;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		cin>>strs[i];
	}
	string result;
	sort(strs,strs+T,cmp);
	for(int i=0;i<T;i++){
		result+=strs[i];
	}
	while(result.length()&&result[0] == '0'){
		result.erase(result.begin());//ÏûÍ·
	}
	if(result.length())
		cout<<result;
	else printf("0");
	return 0;
}

