# include <iostream>
using namespace std;

class queue{
	
	private:
		int back;
		int front;
		int *arr;
		int capacity;
	
	public:
		queue(int size){
			capacity = size;
			arr = new int[capacity];
			back = -1;
			front = -1;
		}
		
//		enqueue [PUSH]
		void push(int num){
			if (front == -1){
				front++;
			}
			if (back==capacity-1){
				cout<<"Queue Overflow"<<endl;
				return;
			}
			arr[++back]=num;
			cout<<"Value Added"<<endl;
		}
		
//		dequeue [POP]
		void pop(){
			if (front==-1 || front>back){
				cout<<"Queue Underflow"<<endl;
				return;
			}
			front++;
			cout<<"Value Removed"<<endl;
		}
		
//		peek return front value
		void peek(){
			if (front==-1 || front>back){
				cout<<"Queue is Empty"<<endl;
				return;
			}
			cout<<arr[front];
		}

		~queue(){
			delete[] arr;
		}
		
		
};

int main(){
	   queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    q.peek();   

    q.pop();
    q.peek();   

    return 0;
}