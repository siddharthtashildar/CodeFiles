

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
		
		// Deep Copy Constructor
		ArrayList(const ArrayList& other) {
		    MaxCapacity = other.MaxCapacity;
		    CurrSize = other.CurrSize;
		    data = new int[MaxCapacity];
		    for (int i = 0; i < CurrSize; i++) {
		        data[i] = other.data[i];
		    }
		}

		// Assignment Operator Overload (Deep Copy)
		ArrayList& operator=(const ArrayList& other) {
		    if (this != &other) {
		        delete[] data;
		        MaxCapacity = other.MaxCapacity;
		        CurrSize = other.CurrSize;
		        data = new int[MaxCapacity];
		        for (int i = 0; i < CurrSize; i++) {
		            data[i] = other.data[i];
		        }
		    }
		    return *this;
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
		    //cout << "ArrayList is empty! Retard!" << endl;
		    throw out_of_range("ArrayList is empty!");
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
		    throw out_of_range("ArrayList is empty!");
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
		        cout << "Queue is empty! Retard!" << endl;
		    }
		    list.removeFirst();
		}

		int front() {
		    return list.getFirst();
		}

		bool isEmpty()  {
		    return list.isEmpty();
		}

		int size() {
		    return list.size();
		}

		void display() {
		    list.DisplayAll();
		}
};

void swapQueue(Queue &q1, Queue &q2) {
    Queue temp = q1;
    q1 = q2;
    q2 = temp;
}

class Stack {

    private:
    
        Queue q1, q2;
        int currSize;
        
    public:
    
        Stack() : currSize(0) {}
        void push(int val) {
            q2.enqueue(val);
            while (!q1.isEmpty()) {
                q2.enqueue(q1.front());
                q1.dequeue();
            }
            swapQueue(q1, q2);
            currSize++;
        }
        void pop() {
            if (q1.isEmpty()) {
                cout << "Stack is empty! Retard! " << endl;
            }
            q1.dequeue();
            currSize--;
        }
        int top() {
            if (q1.isEmpty()) {
                cout << "Stack is empty! Retard! " << endl;
            }
            return q1.front();
        }
        bool isEmpty() {
            return q1.isEmpty();
        }
        int size() {
            return currSize;
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

    cout << "Stack size: " << s.size() << endl;
    
    cout << " " << endl;

    while (!s.isEmpty()) {
        cout << "Popping: " << s.top() << endl;
        s.pop();
    }
	
	cout << "The Stack is now empty! Retard!" << endl;

	return 0;
}
