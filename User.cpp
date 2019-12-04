#include <iostream>
#include <vector>
#include <string>


using namespace std;

class User {

public:
string username;
string password;
int balance;

//Initiate the network printer
vector<int> documents;

//When user is created
User(string un, string pw) {
  username = un;
  password = pw;
  balance = 100;
}


//Adding documents to network
void addDocument(int documentPages){
  if(balance < documentPages){
    cout << "You have no more pages left" << endl;
  } 
  else {
    cout << "Your balance is " << balance << endl;
    documents.push_back(documentPages);
    //deduct page balance
    balance = balance - documentPages;
    cout << username << " has added " << documentPages << " pages." << endl;
    cout << "Balance is: " << balance << endl;
  }
}


//Check all documents in printer network for current user
void viewDocumentsInNetwork(){
  if(documents.size() != 0){
    cout << endl << "----------------------------" << endl;
    cout << "Pending Documents:" << endl;
    cout << "User: " << username << endl;
    cout << "Balance: " << balance << endl;
    cout << "----------------------------" << endl;
    for(int i=0; i<documents.size(); i++) {
      cout << "Document " << i+1  << " has " << documents.at(i) << " pages" << endl;
    }
    cout << "----------------------------" << endl;
  } 
  else {
    cout << "There are no documents pending." << endl;
  }
  
}


//Getting specific document from network
//Passing in document number from vector 
int getDocumentFromNetwork(int document){
  return documents.at(document-1); //returns the page num of a specific document
}


//remove document from network
void deleteFromNetwork(int document){
  documents.erase(documents.begin()+(document-1)); //remove that document from the printer
}

//remove all documents from queue
void deleteAllFromNetwork(){
  documents.clear();
}

};
