#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
		int length = nums.size(), index = 0;
		while ( index < length )
		{
			 if ( nums[index] == val )
			 {
				 nums[index] = nums[length - 1];
				 -- length;
			 }
				
			else ++index;
		}
		 return length;  
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
	int l = removeElement(v,value);
	cout<<l;
}
