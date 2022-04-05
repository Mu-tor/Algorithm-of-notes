#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool hashT[64];
int hashfunc(char c){
	if(c>='a'&&c<='z'){
		return c-'a';
	}else if(c>='A'&&c<='A'){
		return c-'A'+26;
	}else if(c>='0'&&c<='9'){
		return c-'0'+52;
	}else return 63;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.length(),len2=s2.length();
	for(int i=0;i<len1;i++){
		hashT[hashfunc(s1[i])] = true;
	}
	
	for(int i=0;i<len2;i++){
		printf(hashT[hashfunc(s2[i])]?"1":"0");
		if(i<len2-1)
			printf(" ");
	}
	
	return 0;
}

