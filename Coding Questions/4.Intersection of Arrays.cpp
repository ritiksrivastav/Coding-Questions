#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for (int i=0;i<nums2.size();i++){
            if (s.count(nums2[i])) {
                res.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return res;
}
int main(){
	int n,m;
	cin>>n;
    cin>>m;
	vector <int> v1;
	vector <int> v2;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		v1.push_back(c);
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		v2.push_back(x);
	}
    v1 = intersection(v1,v2);
    for(auto x:v1){
        cout<<x<<" ";
    }
}
