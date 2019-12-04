#include <iostream> 
#include <queue> 
  
using namespace std; 

class PrinterQueue {
  public:
  queue<int> printerQueue; 

  //push to the queue
  void addToQueue(int docIndex, vector<int> documents) {
    printerQueue.push(documents.at(docIndex-1));
    cout << "Document " << docIndex << " added to queue" << endl;
    documents.erase(documents.begin()+(docIndex-1));
  }

  //Adding all documents to queue
  void addAllToQueue(vector<int> documents) {
    for(int i=0; i<documents.size(); i++) {
      printerQueue.push(documents.at(i));
      cout << "Document " << i+1 << " added to queue" << endl;
      documents.erase(documents.begin()+i);
    }
  }

  //pop from the queue
  void releasefromQueue() {
    while (!printerQueue.empty()) { 
        cout << "Released " << printerQueue.front() << "pages" << endl;;
        printerQueue.pop();
      } 
  }
    
  //Show all the elements in queue
  void showQueue() { 
    queue<int> tempQueue = printerQueue;
      while (!tempQueue.empty()) { 
        cout << "Document with " << tempQueue.front() << " pages" << endl; 
        tempQueue.pop(); 
      } 
        cout << endl; 
  } 
  

};

