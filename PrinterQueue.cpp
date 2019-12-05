#include <iostream> 
#include <queue> 
  
using namespace std; 

class PrinterQueue {
  public:
  queue<int> printerQueue; 

  // Push to the queue prints individually
  void addToQueue(int pages) {
    printerQueue.push(pages);
    cout << "Document with " << pages << " pages added to queue" << endl;
  }

  // Adding all documents to queue prints all
  void addAllToQueue(vector<int> documents) {
    for(int i=0; i<documents.size(); i++) {
      printerQueue.push(documents.at(i));
      cout << "Document " << i+1 << " added to queue" << endl;
    }
  }

  // Pop from the queue releases the documents 
  void releasefromQueue() {
    while (!printerQueue.empty()) { 
        cout << "Released " << printerQueue.front() << " pages " << endl;
        printerQueue.pop();
      } 
  }
    
  // Show all the elements in queue
  void showQueue() { 
    
    queue<int> tempQueue = printerQueue;
    cout << "-----" << "Printer Queue" << "------" << endl;
      while (!tempQueue.empty()) { 
        cout << "Document with " << tempQueue.front() << " pages " << endl; 
        tempQueue.pop(); 
      }
        cout << endl; 
  } 
  
};
