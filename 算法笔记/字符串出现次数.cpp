#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int hashT[26*26*26*10]={0};
int nums[1000]={0};
int hashFunc(string str){
	int len = str.length();
	int ans = 0;
	for(int i=0;i<len;i++){
		ans = ans*26+str[i]-'A';
	}
	return ans;
}
int main(){
	int n,m,i;
	string str;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		cin>>str;
		++hashT[hashFunc(str)];
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		cin>>str;
		nums[i] = hashT[hashFunc(str)];
	}
	for(i=0;i<m;i++){
		printf("%d",nums[i]);
		if(i<m-1)	printf(" ");
	}
	return 0;
}

