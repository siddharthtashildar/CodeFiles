

#include <iostream>

using namespace std;


class ArrayList{
	
	private:
	
		int* data;
		int MaxCapacity;
		int CurrSize;
		
		void resize(){
		
			MaxCapacity *= 2;
			
			int* newData = new int[MaxCapacity];
			for(int i = 0; i < CurrSize; i++){
			
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
		
		
		}

	public:
		
		ArrayList(int initCapac = 10){ 
			MaxCapacity = initCapac;
			CurrSize = 0;
			data = new int[MaxCapacity];
		}
		
		~ArrayList() {
			delete[] data;
		}
		
		void removeFirst() {
		    if (CurrSize > 0) {
		        for (int i = 0; i < CurrSize - 1; i++) {
		            data[i] = data[i + 1];
		        }
		        CurrSize--;
		    }
		}

		int getFirst() {
		    if (CurrSize > 0) {
		        return data[0];
		    }
		    throw out_of_range("ArrayList is empty! Retard!");
		}
		
		
		void insert(int val) {
		
			if(CurrSize == MaxCapacity){
				resize();
			}
			data[CurrSize++] = val;
			
		}
		
		bool isEmpty() {
		    return CurrSize == 0;
		}

		int size() {
		    return CurrSize;
		}
		
		//Old Functions
		
		void removeLast() {
        	if (CurrSize > 0) {
            	CurrSize--;
        	}
    	}
    	
	    int getLast() {
		    if (CurrSize > 0) {
		        return data[CurrSize - 1];
		    }
		    throw out_of_range("ArrayList is empty! Retard!");
		}

    	
		void deleteEle(int index){
			
			if(index < 0 || index >= CurrSize){
				cout << "All Hail Python! Index out of range retard!" << endl;
				return;
			}
			for (int i = index; i < CurrSize-1;i++){
				data[i] = data[i+1];
			}
			CurrSize--;
		}
		
		int access(int index) {
		
			if(index < 0 || index >= CurrSize){
				cout << "All Hail Python! Index out of range retard!" << endl;
				return -1;
			}
			return data[index];
		}
		
		void DisplayAll(){
			//cout << "ladies and gentlemen, Your ArrayList is Here: ";
			for(int i = 0;i < CurrSize ; i++){
				cout << data[i] << " ";
			}
			cout << endl;
		}
};


/*
class Stack {

	private:
	
		ArrayList list;

	public:
	
		Stack() : list() {}

		void push(int val) {
		    list.insert(val);
		}

		void pop() {
		    if (list.isEmpty()) {
		        throw out_of_range("Stack is empty");
		    }
		    list.removeLast();
		}

		int top() const {
		    return list.getLast();
		}

		bool isEmpty() const {
		    return list.isEmpty();
		}

		int size() const {
		    return list.size();
		}
};
*/

class Queue {

	private:
	
		ArrayList list;

	public:
	
		Queue() : list() {}

		void enqueue(int val) {
		    list.insert(val);
		}

		void dequeue() {
		    if (list.isEmpty()) {
		        throw out_of_range("Queue is empty! Retard!");
		    }
		    list.removeFirst();
		}

		int front() const {
		    return list.getFirst();
		}

		bool isEmpty() const {
		    return list.isEmpty();
		}

		int size() const {
		    return list.size();
		}

		void display() {
		    list.DisplayAll();
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
    
    cout << "And Deleting The Front element is: " << q.front() << endl;
    
    cout << " " << endl;

    q.dequeue();
    cout << "After dequeuing one element: ";
    q.display();
    
    cout << " " << endl;

    cout << "Queue size: " << q.size() << endl;
    
    cout << " " << endl;
	
	return 0;

}
