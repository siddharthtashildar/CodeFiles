
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

int main(){

	LinkedList list;

    
    list.addAtHead(69);
    list.addAtHead(420);
    list.addAtTail(33);
    list.addAtTail(37);

    cout << "Ladies And Gentlemen, here is ur Linked list: ";
    list.display();

	return 0;
}
