	#include <iostream>
	using namespace std;
	
	class stack{
		private:
			int capacity;
			int top;
			int *arr;
		public:
			stack(int size){
			capacity = size;
			arr = new int[capacity];
			top = -1;
			}
			void display(){
				if(top==-1){
					cout<<"Stack is Empty"<<endl;
					return;
				}
				for(int i=top;i>=0;i++){
					cout << arr[i]<<endl;
				}
			}	
			void push(int val){
			if(capacity==top+1){
				cout<<"Stack OverFlow"<<endl;
				return;
			}
			arr[++top]=val;
			cout<<"Value is added "<<endl;
			}
			void pop(){
				if(top==-1){
				cout<<"Nothing to pop"<<endl;
				return;
				}
				cout<<arr[top--]<<" is removed"<<endl;
			}
			~stack(){
	    	delete[] arr;
			}
		};	
	int main(){
		int size;
		cout<<"Enter size of stack: "<<endl;
		cin>>size;
		stack s(size);
		s.display();
		s.pop();
		s.push(17);
		s.push(43);
		s.push(94ss);
//		s.display();
//		s.pop();
		
		return 0;
	}
