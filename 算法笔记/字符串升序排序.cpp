#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

const int MAXL = 50;
int main(){
	int T,temp,j;
	string str[MAXL];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		cin>>str[i];
	}
	sort(str,str+T);
	for(int i=0;i<T;i++){
		cout<<str[i];
		if(i<T-1){
			printf("\n");
		}
	}
	return 0;
}

