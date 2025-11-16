#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
int index = -1;
for (int i=0;i<size;i++)
{
	if(arr[i]==key){
		index = i;
		break;
	}
}
	return index;
}

int main(){
	int key ,result ;
	
	int arr[10] = {2, 4, 324, 3, 235, 52, 5, 62, 62, 2};
	cout<<"\nEnter the value you want to find : ";
	cin>>key;
	
	result = linear_search(arr,10,key);
	
 	if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;
        
	return 0;
}
