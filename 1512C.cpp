#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s1,s2;
	for(int i=1;i<=100000;i++){ 
		s1.insert(i);
		s2.insert(i);	
	} 
	int t1=clock();
	for(int i=0;i<10;i++){
		auto p=lower_bound(s1.begin(),s1.end(),i);
	}
	int t2=clock();
	cout<<"lower_bound use:"<<t2-t1<<"ms\n";
	
	t1=clock();
	for(int i=0;i<10;i++){
		auto p=s2.lower_bound(i);
	}
	t2=clock();
	cout<<"s2.lower_bound use:"<<t2-t1<<"ms\n";
	
} 