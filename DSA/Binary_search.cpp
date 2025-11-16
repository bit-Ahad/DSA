#include<iostream>
using namespace std;

int binary_search(int arr[] , int size , int key){
	int high = size - 1;
	int low = 0;
	while(low<=high){
		int mid = (high+low)/2;
		if(key==arr[mid]){
			return mid;
		}
		else if(key>arr[mid]){
			low = mid + 1 ;
		}
		else{
			high = mid - 1 ;
		}
	}
	return -1;
}

int main(){
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	int arr[size];
	for (int i = 0; i<size ; i++){
		cout<<"Enter "<<i+1<<" Element : ";
		cin>>arr[i];
	}
	
	int result = binary_search(arr,size,15);
	if(result==-1){
		cout<<"Element is not in array. "<<endl;
	}
	else{
		cout<<"Element is found at "<<result<<" index. "<<endl;
	}
	
	return 0;
}
