#include<iostream>
#include<algorithm>
using namespace std;

bool isCoprimeInt(int x,int y){
	if(__gcd(x,y)==1) return true;
	else return false;
}
//ax+by=c
int main(){
	int a,b,c,count=0;
	cin>>a>>b>>c;
	for(int x=1;x<c;++x){
		for(int y=1;y<c;++y){
			if(a*x+b*y==c&&isCoprimeInt(x, y)) count++;
		}
	}
	cout<<count;
	return 0;
}
