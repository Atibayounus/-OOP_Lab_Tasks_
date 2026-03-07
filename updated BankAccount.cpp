#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName; 
    int accountNumber;        
    double balance;           

public:
    //  Default Constructor 
    BankAccount() {
        accountHolderName = "Unknown"; 
        accountNumber = 10000;         
        balance = 0.0;               
    }

    // Parameterized Constructor 
    BankAccount(string name, int accNum, double bal) {
    	
        //initializing safely
        accountHolderName = "Unknown";
        accountNumber = 10000;
        balance = 0.0;

    
        setName(name);
        setAccountNumber(accNum);
        setBalance(bal);
    }

    // Copy Constructor 
    
    BankAccount(const BankAccount &obj) {
        
        accountHolderName = "Unknown";
        accountNumber = 10000;
        balance = 0.0;

    
        setName(obj.getName());
        setAccountNumber(obj.getAccountNumber());
        setBalance(obj.getBalance());
    }

    // Setter Functions with Validation

    void setName(string name) {
        if (name.empty()) { 
            cout << "Invalid Name" << endl;
        } else {
            accountHolderName = name;
        }
    }

    void setAccountNumber(int accNum) {
    	
        //  5-digit positive number 
        if (accNum < 10000 || accNum > 99999) {
            cout << "Invalid Account Number" << endl; 
        } else {
            accountNumber = accNum;
        }
    }

    void setBalance(double bal) {
        // as Balance cannot be negative 
        if (bal < 0) { 
            cout << "Invalid Balance" << endl;
        } else {
            balance = bal;
        }
    }

    // Getter Functions 

    string getName() const { 
	return accountHolderName; 
	}    
    int getAccountNumber() const {
	 return accountNumber;
	  }  
    double getBalance() const {
	 return balance;
	  }          

    // Display Function 
    void displayAccountInfo() {
        cout << "Account Holder Name: " << accountHolderName << endl; 
        cout << "Account Number: " << accountNumber << endl;         
        cout << "Balance: " << balance << endl;                    
    }
};

int main() {
    //   02345 jo apne bola
    
    BankAccount acc1;
    acc1.setName("Atiba Dar");
    acc1.setAccountNumber(02345); 
    acc1.setBalance(6000);
    acc1.displayAccountInfo();

    return 0;
}
