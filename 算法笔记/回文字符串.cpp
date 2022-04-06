#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int len;
string str;
bool restr(int n){
	if(n<=len/2-1) return true;
	else return (restr(n-1)&&str[n]==str[len-n-1]);
}
int main(){
	cin>>str;
	len = str.length();
	printf(restr(len-1)?"Yes":"No");
	return 0;
}
