#include<iostream>
#include<vector>
using namespace std;
void add(vector<int> v, int a, int target){
	for(int i=0; i<a; i++){
		for(int j=i+1; j<a; j++){
			int sum=v[i]+v[j];
			if(sum==target){
				cout<<"target found at ["<<i<<","<<j<<"]"<<endl;
			}
			else{
				continue;
			}
		}
	}
}
int main(){
	int a=0;
	int tar;
	cin>>tar;
	vector<int> vec={2,5,7,4,11,15};
	for(int ele:vec){
		if(ele!=0){
			a=a+1;
		}
	}
	add(vec, a, tar);
	return 0;
}
