 										//  Remove Duplicates from the Array //

 #include<iostream> // comparing adjacent elements.
 #include<vector>
 using namespace std;
 int removeDuplicates(vector <int> v){
	if (v.size() == 0)
		return 0;
    int i = 0;
    for (int j = 1; j < v.size(); j++) {
        if (v[j] != v[i]) {
        	i++;
            v[i] = v[j];
        }
    }
    return i + 1;
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
	 int res = removeDuplicates(v);
	 cout<<res;
 }












 #include<iostream> // using set
 #include<vector>
 #include<set>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	vector <int> v;
 	set <int> s;
 	for(int i=0;i<n;i++){
 		int c;
		cin>>c;
		v.push_back(c); 
	 }
 	for(int i=0;i<n;i++){
 		s.insert(v[i]);
	 }
	 cout<<s.size();
 }

