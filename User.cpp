#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User {

public:
string username;
string password;
int balance;

// Initiate the network printer
vector<int> documents;

// When user is created
User(string un, string pw) {
  username = un;
  password = pw;
  balance = 100;
}


// Adding documents to network
void addDocument(int documentPages){
  // Check if user has enough balance
  if(balance < documentPages){
    cout << "You have no more pages left" << endl;
  } 
  else {
    cout << "Your balance is " << balance << endl;
    documents.push_back(documentPages);
    // Deduct page balance
    balance = balance - documentPages;
    cout << username << " has added " << documentPages << " pages." << endl;
    cout << "Balance is now " << balance << endl;
  }
}


//Check all documents in printer network for current user
void viewDocumentsInNetwork(){
  if(documents.size() != 0){
    cout << endl << "|----------------------------|" << endl;
    cout << "| Pending Documents:" << endl;
    cout << "| User: " << username << endl;
    cout << "| Balance: " << balance << endl;
    cout << "|----------------------------|" << endl;
    for(int i=0; i<documents.size(); i++) {
      cout << "| Document " << i+1  << " has " << documents.at(i) << " pages" << endl;
    }
    cout << "|----------------------------|" << endl;
  } 
  else {
    cout << "There are no documents pending." << endl;
  }
  
}


// Getting specific document from network 
int getDocumentFromNetwork(int document){
  return documents.at(document-1); //returns the page num of a specific document
}


// Remove document from network
void deleteFromNetwork(int document){
  // document-1 gets the actual index in the vector
  documents.erase(documents.begin()+(document-1)); 
}

// Remove all documents from queue
void deleteAllFromNetwork(){
  documents.clear();
}

};
