#include<bits/stdc++.h>
using namespace std;
string lcs(vector<string>& str1){
	int temp;
	string result=str1[0];
	for(int i=1;i<str1.size();i++){
		temp=0;
		while(temp<result.size()&&temp<str1[i].size() &&result.at(temp)==str1[i].at(temp)){
			temp++;
		}
		result=result.substr(0,temp);
	}
	return result;
}
int main(){
	vector<string> str1;
	int n;
	string str2,result;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str2;
		reverse(str2.begin(),str2.end());
		str1.push_back(str2);
	}
	result = lcs(str1);
	reverse(result.begin(),result.end());
	cout<<result<<endl;
}
