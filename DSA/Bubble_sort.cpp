#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
	for (int i=0;i<size-1;i++){
		for (int j=0 ; j<size-i-1 ; j++){
			if(arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	int array[size];
	for (int i=0;i<size;i++){
		cout<<"\nEnter the "<<i+1<<" Element : "<<endl;
		cin>>array[i];
	}
	
	bubble_sort(array,size);
	
		cout<<"\nThe Sorted array is :\n";
	for (int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	
	return 0;	
}

