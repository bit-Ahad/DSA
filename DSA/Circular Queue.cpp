# include <iostream>
using namespace std;

class circular_queue{
	private:
		int *arr;
		int back;
		int front;
		int capacity;
	public:
		circular_queue(int size){
			capacity = size;
			back = -1;
			front = -1;
			arr = new int[capacity];
		}
		void push(int a) {
    		if(((back+1)%capacity)==front){
    			cout<<"Queue is Full"<<endl;
    			return;
			}
			if(front==-1){
				back=0;
				front=0;
			}
			else{
				back = ((back+1)%capacity);
			}
			arr[back]=a;
			cout<<"Value Added"<<endl;
		}

//		dequeue [POP]
		void pop() {
		    if(front==-1){
		    	cout<<"Queue is Empty"<<endl;
		    	return;
			}
			if(front==back){
				back=-1;
				front=-1;
			}
			else{
				front = ((front+1)%capacity);
			}
			cout<<"Value Removed "<<endl;
		}

//		peek [return value that will be poped]
		void peek(){
			if(front==-1){
				cout<<"Queue is Empty"<<endl;
				return;
			}
			cout<<arr[front]<<endl;
		}
		~circular_queue() {
    		delete[] arr;
		}

};