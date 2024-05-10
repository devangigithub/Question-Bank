#include <iostream>
using namespace std;

class BankAccount 
{
private:
	
    float balance;
    
public:
    BankAccount(float initialBalance) 
	{
        balance = initialBalance;
    }
    void deposit(float amount) 
	{
        if (amount > 0) 
		{
            balance=balance+amount;
            cout << "Amount deposited successfully. Updated balance: ?" << balance << endl;
        } 
		else 
		{
            cout << "Invalid deposit amount. Please enter a positive amount." << endl;
        }
    }
    void withdraw(float amount) 
	{
        if (amount > 0) 
		{
            balance -= amount;
            cout << "Amount withdrawn successfully. Updated balance: ?" << balance << endl;
        }
 
		else 
		{
            cout << "Insufficient balance. Withdrawal amount exceeds available balance." << endl;
        }
    }
    float getBalance()
	{
        return balance;
    }
};
int main() 
{
    BankAccount account(18000);
    
    account.deposit(5000);
    account.withdraw(20000);
    account.withdraw(5000);
    account.deposit(30000);
    
    cout << "Final balance: ?" << account.getBalance() << endl;
    return 0;
}

