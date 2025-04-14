
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
		
		void addAtHead(int val){
		
			Node* newNode = new Node(val);
		    newNode->nextEle = head;
		    head = newNode;
		}
		
		
		void removeHead() {
		    if (!head) {
		        throw out_of_range("LinkedList is empty");
		    }
		    Node* temp = head;
		    head = head->nextEle;
		    delete temp;
		}

		int getHead() const {
		    if (!head) {
		        throw out_of_range("LinkedList is empty");
		    }
		    return head->data;
		}

		bool isEmpty() const {
		    return head == nullptr;
		}
		
		
		//OLD FUNCTIONS
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
		
		void display() {
		    Node* temp = head;
		    while (temp) {
		        cout << temp->data << " -> ";
		        temp = temp->nextEle;
		    }
		    cout << "NULL" << endl;
    	}
};




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


int main(){

	Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "And The Top element is: " << s.top() << endl;
    
    cout << " " << endl;

    s.pop();
    cout << "Top element after popping: " << s.top() << endl; 
    
    cout << " " << endl;

    cout << "Stack size: " << s.getSize() << endl;
    
    cout << " " << endl;

    while (!s.isEmpty()) {
        cout << "Popping: " << s.top() << endl;
        s.pop();
    }
	
	cout << "The Stack is now empty! Retard!" << endl;

	return 0;
}
