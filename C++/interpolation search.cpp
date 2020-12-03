#include <bits/stdc++.h>
using namespace std;

int interpolation(int arr[],int lo,int hi,int x){
	
	if(lo == hi){
		if(arr[lo] == x) return lo;
		return -1;
	}
	int pos = lo +(((x-arr[lo])*(hi - lo))/(arr[hi]-arr[lo]));
	if(arr[pos] == x){
		return pos;
	}
	else if(arr[pos]<x)
		interpolation(arr,pos+1,hi,x);
	else
		interpolation(arr,lo,pos-1,x);
	return -1;
}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
        cin>>x;
	cout<<"\n index "<<interpolation(arr,0,n-1,x)<<endl;
	return 0;
	
}
