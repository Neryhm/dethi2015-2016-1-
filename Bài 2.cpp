#include<iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>A,B,C;
	int a,b,c;
	for(int i=0;i<n;++i){
		cin>>a;
		A.push_back(a);
		cin>>b;
		B.push_back(b);
		cin>>c;
		C.push_back(c);
	}
	int count=0;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(C[i]==C[j]){
				if((A[i]==A[j]&&B[i]!=B[j])||(A[i]!=A[j]&&B[i]==B[j])) count++;
			}
		}
	}
	cout<<count;
}
