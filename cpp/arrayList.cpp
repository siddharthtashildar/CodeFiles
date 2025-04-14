

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
		
		void insert(int val) {
		
			if(CurrSize == MaxCapacity){
				resize();
			}
			data[CurrSize++] = val;
			
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


int main() {

	ArrayList list;
	
	list.insert(69);
	list.insert(420);
	list.insert(33);
	list.insert(37);
	
	cout << " " << endl;
	
	cout << "Here is ur initial array! Hombre: " << endl;
	list.DisplayAll();
	
	cout << " " << endl;
	cout << "Do know how many engines Spacex Starship Super Heavy has? Its answer is stored in arraylist 3rd element! Lets access it!: " << list.access(2) << endl;
	
	cout << " " << endl;
	list.deleteEle(1);
	cout << "Removed 69 at index 1 cuz its cringe!" << endl;
	
	cout << " " << endl;
	cout << "Final Array: " << endl;
	list.DisplayAll();
	
	cout << " " << endl;
	
	return 0;

}
