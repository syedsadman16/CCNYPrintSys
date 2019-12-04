#include <iostream> 
#include <queue> 
  
using namespace std; 

class PrinterQueue {
  public:
  queue<int> printerQueue; 

//push to the queue
  void addToQueue(int pages) {
    printerQueue.push(pages);
  }

  //  pop from the queue
  //printFromQueue
    void releasefromQueue(int pages){
      printerQueue.pop();
    }
    
  //Show all the elements in queue
  void showQueue(queue <int> gq) { 
    queue <int> g = gq; 
      while (!g.empty()) { 
        cout << '\t' << g.front(); 
        // g.pop(); 
      } 
        cout << '\n'; 
  } 
  

};



// #include <iostream>
// using namespace std; 
  
// struct Queue { 
//     int front, rear, capacity; 
//     int* queue; 
//     Queue(int c) 
//     { 
//         front = rear = 0; 
//         capacity = c; 
//         queue = new int; 
//     } 
  
//     ~Queue() { delete[] queue; } 
  
//     // function to insert an element 
//     // at the rear of the queue 
//     void queueEnqueue(int data) 
//     { 
//         // check queue is full or not 
//         if (capacity == rear) { 
//             cout<<("\nQueue is full\n"); 
//             return; 
//         } 
  
//         // insert element at the rear 
//         else { 
//             queue[rear] = data; 
//             rear++; 
//         } 
//         return; 
//     } 
  
//     // function to delete an element 
//     // from the front of the queue 
//     void queueDequeue() 
//     { 
//         // if queue is empty 
//         if (front == rear) { 
//             cout << "Queue is  empty"; 
//             return; 
//         } 
  
//         // shift all the elements from index 2 till rear 
//         // to the left by one 
//         else { 
//             for (int i = 0; i < rear - 1; i++) { 
//                 queue[i] = queue[i + 1]; 
//             } 
  
//             // decrement rear 
//             rear--; 
//         } 
//         return; 
//     } 
  
//     // print queue elements 
//     void queueDisplay() 
//     { 
//         int i; 
//         if (front == rear) { 
//             cout << "Queue is Empty"; 
//             return; 
//         } 
  
//         // traverse front to rear and print elements 
//         for (i = front; i < rear; i++) { 
//             cout << "  <-- " << queue[i]; 
//         } 
//         return; 
//     } 
  
//     // print front of queue 
//     void queueFront() 
//     { 
//         if (front == rear) { 
//             cout<< "Queue is Empty"; 
//             return; 
//         }
//         cout << "Front Element is:" << queue[front]; 
//         return; 
//     } 
// }; 

// int main(void) 
// { 
//     // Create a queue of capacity 4 
//     Queue q(4); 
  
//     // print Queue elements 
//     q.queueDisplay(); 
  
//     // inserting elements in the queue 
//     q.queueEnqueue(20); 
//     q.queueEnqueue(30); 
//     q.queueEnqueue(40); 
//     q.queueEnqueue(50); 
  
//     // print Queue elements 
//     q.queueDisplay(); 
  
//     // insert element in the queue 
//     q.queueEnqueue(60); 
  
//     // print Queue elements 
//     q.queueDisplay(); 
  
//     q.queueDequeue(); 
//     q.queueDequeue(); 
  
//     cout<<("\n\nafter two node deletion\n\n"); 
  
//     // print Queue elements 
//     q.queueDisplay(); 
  
//     // print front of the queue 
//     q.queueFront(); 
  
//     return 0; 
// }

