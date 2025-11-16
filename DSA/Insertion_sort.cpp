#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
	for(int i=1;i<size;i++){
		int current = arr[i];
		int previous = i-1;
		while(previous>=0 && arr[previous]>current){
			arr[previous+1]=arr[previous];
			previous--;
		}
		arr[previous+1]=current;
	}
}

int main(){
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	
	int arr[size];
	for(int n=0;n<size;n++){		
		cout<<"\nEnter "<<n+1<<" Element of array : ";
		cin>>arr[n];
	}
	
	insertion_sort(arr,size);
	
	cout<<"\nArray with sorted Elements is :\n";
	for(int n=0;n<size;n++){		
		cout<<arr[n]<<" ";
	}
	
	
	return 0;
}
