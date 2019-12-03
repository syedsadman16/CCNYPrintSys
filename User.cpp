#include <iostream>
#include <vector>
#include <string>


using namespace std;

class User {

public:
string username;
string password;
int balance;

//Initiate the netowrk printer
vector<int> documents;

//When user is created
User(string un, string pw) {
  username = un;
  password = pw;
  balance = 100;
}


//Adding documents to network
void addDocument(int documentPages){
  documents.push_back(documentPages);
  if(balance < documentPages){
    cout << "Your balance is " << balance << endl;
  }
  //deduct page balance
  balance = balance - documentPages;
  cout << username << " has added " << documentPages << " pages." << endl;
  cout << "Balance is: " << balance << endl;
}


//Check all documents in printer network for current user
void viewDocumentsInNetwork(){
  if(documents.size() != 0){
    cout << endl << "----------------------------" << endl;
    cout << "Pending Documents:" << endl;
    cout << "User:" << username << endl;
    cout << "----------------------------" << endl;
    for(int i=0; i<documents.size(); i++){
      cout << "Document " << i+1  << " has " << documents.at(i) << " pages" << endl;
    }
    cout << "----------------------------" << endl;
  } else {
    cout << "There are no documents pending." << endl;
  }
  
}


//Getting specific document from network
//This can be used to add a specific document to the printer queue fromt the network
//Simulates 'releasing' a job from the netowrk
int getDocumentFromNetwork(int document){
  return documents.at(document-1); //returns the page num of a specific document
  documents.erase(documents.begin()+1); //remove that document from the printer
}


};
