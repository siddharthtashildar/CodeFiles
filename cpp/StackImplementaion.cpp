

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
		

		
		void removeLast() {
        	if (CurrSize > 0) {
            	CurrSize--;
        	}
    	}
		
		
		void insert(int val) {
		
			if(CurrSize == MaxCapacity){
				resize();
			}
			data[CurrSize++] = val;
			
		}
		
	    int getLast() const {
		    if (CurrSize > 0) {
		        return data[CurrSize - 1];
		    }
		    throw out_of_range("ArrayList is empty");
		}

		bool isEmpty() const {
		    return CurrSize == 0;
		}

		int size() const {
		    return CurrSize;
		}
		
		//Old Functions
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


int main() {
	

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
