#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool hashT[26];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len1 = s1.length(),len2 = s2.length();
	for(int i=0;i<len1;i++){
		hashT[s1[i]-'a'] = true;
	}
	for(int i=0;i<len2;i++){
		printf(hashT[s2[i]-'a']?"1":"0");
		if(i<len2-1)
			printf(" ");
	}
	return 0;
}

