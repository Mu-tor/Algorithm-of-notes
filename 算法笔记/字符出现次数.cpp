#include<iostream>
#include<string>
#include<cstring>

const int MAX = 100;
int hashTable[26];
using namespace std;
int main(){
	char str[MAX];
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0;i<len;i++){
		hashTable[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(hashTable[i]){
			printf("%c %d\n",i+'a',hashTable[i]);
		}
	}
	return 0;
}

