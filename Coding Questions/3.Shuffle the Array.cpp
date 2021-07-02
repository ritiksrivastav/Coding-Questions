#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for(int i=0;i<(nums.size())/2;i++){
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
}
int main(){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		v.push_back(c);
	}
	int value;
	cin>>value;
	v = shuffle(v,value);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
