
#include <iostream>

using namespace std;


struct Node{

	int data;
	Node* nextEle;
	
	Node(int val) {
		data = val;
		nextEle = nullptr;
	}
};

class LinkedList{

	private:
	
		Node* head;
		
	public:
	
		LinkedList(){
			head = nullptr;
		}
		
		~LinkedList(){
			Node* curr = head;
			while(curr){
				Node* temp = curr;
				curr = curr -> nextEle;
				delete temp;
			}
		
		}

		void addAtTail(int val){
		
			Node* newNode = new Node(val);
		    if (!head) {
		        head = newNode;
		        return;
		    }
		    Node* temp = head;
		    while (temp->nextEle) {
		        temp = temp->nextEle;
		    }
		    temp->nextEle = newNode;
		}
		
		
		
		void removeHead() {
		    if (!head) {
		        cout << "LL is empty! Retard!" << endl;
		    }
		    Node* temp = head;
		    head = head->nextEle;
		    delete temp;
		}

		int getHead() {
		    if (!head) {
		        cout << "LL is empty! Retard!" << endl;
		    }
		    return head->data;
		}

		bool isEmpty() {
		    return head == nullptr;
		}
		
		
		//OLD FUNCTIONS

		void addAtHead(int val){
		
			Node* newNode = new Node(val);
		    newNode->nextEle = head;
		    head = newNode;
		}
		
		void display() {
		    Node* temp = head;
		    while (temp) {
		        cout << temp->data << " -> ";
		        temp = temp->nextEle;
		    }
		    cout << "NULL" << endl;
    	}
};



/*
class Stack {

	private:
	
		LinkedList list;
		int size;

	public:
	
		//Stack() {}
		Stack() : size(0) {}

		void push(int val) {
		    list.addAtHead(val);
		    size++;
		}

		void pop() {
		    list.removeHead();
		    size--;
		}

		int top() const {
		    return list.getHead();
		}

		bool isEmpty() const {
		    return list.isEmpty();
		}
		
		int getSize() const {
        	return size;
    	}
};
*/

class Queue {

	private:

		LinkedList list;
		int size;

	public:
		Queue() : size(0) {}

		void enqueue(int val) {
		    list.addAtTail(val);
		    size++;
		}

		void dequeue() {
		    if (list.isEmpty()) {
		        cout << "Queue is empty! Retard!" << endl;
		        return;
		    }
		    list.removeHead();
		    size--;
		}

		int front() {
		    return list.getHead();
		}

		bool isEmpty() {
		    return list.isEmpty();
		}

		int getSize() {
		    return size;
		}

		void display() {
		    list.display();
		}
};


int main() {
	

	//Stack s;

    //s.push(10);
    //s.push(20);
    //s.push(30);

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    
    cout << "Your Queue: ";
    q.display();
    cout << " " << endl;
    
    cout << "And Deleteing The Front element is: " << q.front() << endl;
    
    cout << " " << endl;

    q.dequeue();
    cout << "After dequeuing one element: ";
    q.display();
    
    cout << " " << endl;

    cout << "Queue size: " << q.getSize() << endl;
    
    cout << " " << endl;
	
	return 0;

}
