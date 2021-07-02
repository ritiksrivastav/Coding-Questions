#include<bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v1;
        int a = *max_element(candies.begin(), candies.end());
        for(int i : candies){
            if(i + extraCandies >= a) 
				v1.push_back(true);
			else v1.push_back(false);
        }
        return b;
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
	int extraCandies;
	cin>>extraCandies;
	v=kidsWithCandies(v,extraCandies);
	for(auto x:v){
		cout<<x<<" ";
	}
}
