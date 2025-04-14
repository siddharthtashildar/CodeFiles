#include <iostream>
#include <vector>

using namespace std;

class Heap {
private:
    vector<int> heap;

    // Used for insertion
    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    // Used for deletion
    void heapifyDown(int index) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest]) largest = left;
        if (right < heap.size() && heap[right] > heap[largest]) largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    
    void deleteMax() {
        if (heap.empty()) {
            //cout << "Heap is empty!" << endl;
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    
    int getMax() {
        if (heap.empty()) return -1;
        return heap[0];
    }

   
    void printHeap() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }

    
    vector<int> getHeap() {
        return heap;
    }
};


void heapSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        Heap tempHeap;
        tempHeap.insert(arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        int heapSize = i;
        Heap tempHeap;
        tempHeap.deleteMax();
    }
}


int main() {
    Heap heap;
    
    heap.insert(10);
    heap.insert(20);
    heap.insert(15);
    heap.insert(30);
    heap.insert(40);
    heap.insert(69);
    heap.insert(420);
    heap.insert(37);

    cout << " " << endl;
    cout << "EXECUTING THEM COMMANDS COMRADE ====> " << endl;
    cout << "heap.insert(10);" << endl;
    cout << "heap.insert(20);" << endl;
    cout << "heap.insert(15);" << endl;
    cout << "heap.insert(30);" << endl;
    cout << "heap.insert(40);" << endl;
    cout << "heap.insert(69);" << endl;
    cout << "heap.insert(420);" << endl;
    cout << "heap.insert(37);" << endl;
    cout << " " << endl;


    cout << "Heap after Inserting them kids: ";
    heap.printHeap();

    cout << " " << endl;
    cout << "Max element of that godamn heap: " << heap.getMax() << endl;

    cout << " " << endl;
    heap.deleteMax();
    cout << "Heap after deleting that sucker max Element: ";
    heap.printHeap();

    cout << " " << endl;
    vector<int> arr = {10, 20, 15, 30, 40, 69, 420, 37};
    heapSort(arr);
    cout << "yapping Sorted Array which was done using Heap Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    cout << " " << endl;
    cout << " " << endl;

    return 0;
}