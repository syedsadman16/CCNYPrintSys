  #include <iostream>
  #include <vector>
  #include "User.cpp"
  #include <array>

  using namespace std;

  User addstudent(string username, string password);
  int login(vector<User> users, string loginUsername, string loginPassword);
  void menu(User user);

  int main() {

    // User inputs
    string loginUsername, loginPassword;
    // Get index of specific User
    int index = 0;

//---------------------- GENERATE FAKE DATA ----------------------------------

    // Storing user classes in vector
    vector<User> users;

    string userName[] = {"BSharen","JNicholas", "NGary", "CRoslyn","SGlory", "PAlpha", "JRefugia", "YShawnda", 
    "DMona", "LGilma", "GJaney", "PLili", 
    "ALoren", "CDorothy", "SGail", "TCatalina", 
    "LLawrence", "BCarlee", "AThaddeous", "OJovita", 
    "HAlesia", "HLai", "GBrittni", "KRaylene", 
    "BFlo", "BJani", "MChauncey", "HRyan", 
    "CJess", "DDiane"};

    string passWord[] = {"11791", "34429", "46040", "39211",
    "79602", "95070", "80030", "94545",
    "32750", "82001", "11530", "53715",
    "70322", "18518", "92126", "92276",      
    "84024", "67410", "95678", "32114",
    "20001", "94945","83709", "46514",
    "69301", "98104", "32804", "75075",
    "10016", "64504"};

    // Create User objects using username and password
    for(int i=0; i<30; i++){
    users.push_back( addstudent(userName[i], passWord[i]) );
    }
    

//---------------------- USER LOGIN ----------------------------------

    // Once logged in, get index of the user in the vector
    index = login(users,loginUsername, loginPassword);
    while(index == -1) { 
      index = login(users,loginUsername, loginPassword);
    }

    // Pass in the user with index into menu
    menu(users.at(index));
  
  } //end of main



//---------------------- Function declarations ----------------------------------

  User addstudent(string username, string password){
    User student(username,password);
    return student;
  }

  int login(vector<User> users, string loginUsername, string loginPassword) {
    int index;
    cout << "Enter username" << endl;
    cin >> loginUsername;
    cout << "Enter password" << endl;
    cin >> loginPassword;
    // Checks to see if username is in vector
    for(int i=0; i<users.size(); i++) {
      if((users.at(i).username == loginUsername) && (users.at(i).password == loginPassword)) {
          index = i;
          return index;
      }
      return -1;
    }
  }

  void menu(User user) {
    int choice, pages, documentNum;

    do {

      cout <<"----- User " << user.username << " -------" << endl;
      cout<<"[1] Add Documents" << endl;
      cout<<"[2] View Documents" << endl;
      cout<<"[3] Add Document to Printer Queue\n";
      cout<<"[4] Print" << endl;
      cout<<"[5] Logout" << endl;
      cout<<"[6] EXIT" <<endl;
      cout<<endl;
      cout<<"What do you want to do? : ";
      cin>>choice;
     
      switch(choice) {
        case 1:
          cout << "How many pages?" << endl;
          cin >> pages;
          user.addDocument(pages);
          cout << "You have added " << pages << " pages" << endl;
          break;
        case 2:
          cout << endl;
          user.viewDocumentsInNetwork();     
          cout << endl;        
          break;
        case 3:
          cout <<"Which document do you want to print?" << endl;
          
          cin>>doc_selection;
          break;
        case 4:
          break;
        case 5:
          break;
        case 6:
          break;  
        default :
          cout<<"Invalid choice. \n";
      }   
           
    } while(choice != 6);
        cout <<"All DONE";
  }