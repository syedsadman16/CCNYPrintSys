# CCNYPrinterQueue
Terminal based printing system

# Features
*Log in and menu interface*

User can log in with a username and password. This is created using an instance of the User class which has a username, password, balance and vector to represent document types. 

<img src='https://github.com/syedsadman16/CSC212/blob/master/printerImages/printerMainMenu.PNG' title='Login' width='' alt='' />


The logged in user is show a text based menu with a balance(default:100) and options. User can choose to add documents with a certain number of pages which is represented in a table.


<img src='https://github.com/syedsadman16/CSC212/blob/master/printerImages/printerPendingDocs.PNG' title='PrinterView' width='' alt='' />


*Printer queue and release*

Once there are documents in the printer view, the user can choose specific documents or add all documents into a printer queue. The queue will hold documents until the user decides to release the job to a specific printer queue. 

<img src='https://github.com/syedsadman16/CSC212/blob/master/printerImages/printerChooseQueue.PNG' title='Queue' width='' alt='' /> <img src='https://github.com/syedsadman16/CSC212/blob/master/printerImages/printerReleasing.PNG' title='Release' width='' alt='' />



## Notes
Can run with:
https://PrinterSystem.syedsadman18.repl.run

Example Users: "BSharen","JNicholas", "NGary
Passwords: "11791", "34429", "46040"

---

