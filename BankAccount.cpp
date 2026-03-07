#include<iostream>
#include<string>
using namespace std;


class BankAccount{
	private:
		
	string accountHolderName;
    int accountNumber;
    double balance;
    
    public:
    	// firstly i'm making default constructorr with safe intialized values
    	
    	BankAccount(){
    		accountHolderName = "unknown";
    		accountNumber= 10000;
    		balance=0.0;
    	}
    	// now i'll making parametrized constructorr
    	
        BankAccount(string name, int accNum, double bal) {
        	
        	// to prevent bypassing validationn
        	
           accountHolderName = "Unknown"; 
           accountNumber = 10000;
            balance = 0.0;


            setName(name);
            setAccountNumber(accNum);
             setBalance(bal);
    }

	
        
       	// now making copy constructorr
       	
       	BankAccount(const BankAccount &obj){
       	   setName(obj.getName());
           setAccountNumber(obj.getAccountNumber());
           setBalance(obj.getBalance());
		   }
       	
       	// now setter for name
       	
       	 void setName(string name) {
        if(name.empty())
            cout << "Invalid Name" << endl;
        else
            accountHolderName = name;
    }
       	
       	// setter for Account number
       	
       	  void setAccountNumber(int accNum) {
        if(accNum < 10000 || accNum > 99999)
            cout << "Invalid Account Number" << endl;
        else
             accountNumber = accNum;
    }
    
          //setter for balance
          
           void setBalance(double bal) {
        if(bal < 0)
            cout << "Invalid Balance" << endl;
        else
            balance = bal;
    }

    	// now making getters
    	
    	string getName() const{
    		return accountHolderName;
		}
		
		
		int getAccountNumber() const{
			return accountNumber;
		}
		
		double getBalance() const {
			return balance;
		}
		
		// now making display function
		
		 void displayAccountInfo() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
	
	  // Default constructor call
	  
    BankAccount acc1;
    acc1.setName("Atiba Dar");
    acc1.setAccountNumber(12345);
    acc1.setBalance(6000);
    acc1.displayAccountInfo();

    cout << endl;
    
    
    // Parameterized  constructorr call
    
    BankAccount acc2("sara khan", 54321, 3000);
    acc2.displayAccountInfo();

    // Copy constructor call
    
    BankAccount acc3 = acc2;
    acc3.displayAccountInfo();

    cout << endl;
    
     // now i'm testing edge cases 
      
    acc1.setName("");
    acc1.setAccountNumber(12);
    acc1.setBalance(-100);

    cout << endl;

    BankAccount acc4("", 111, -500);

    return 0;
}
