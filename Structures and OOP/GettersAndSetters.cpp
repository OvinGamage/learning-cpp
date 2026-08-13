#include <iostream>
    class BankAccount {
private:
    double balance = 1000.0; // Private! Cannot be written to directly.

public:
    // Read-only access: Outside code can check balance, but cannot overwrite it
    double getBalance() const {
        return balance;
    }

    // Controlled write access: Modifying balance requires explicit rules
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
        std::cout << "Insufficient funds for withdrawal of $" << amount << std::endl;
    }
    
};
int main(){
    //getters and setters are used to access and modify the private members of a class.
    //A getter is a member function that returns the value of a private member variable.
    //A setter is a member function that sets the value of a private member variable.
    //a private member variable is a variable that can only be accessed by the member functions(methods) of the class.


    BankAccount account;
    std::cout << "Initial balance: $" << account.getBalance() << std::endl;

    account.deposit(500.0);
    std::cout << "After depositing $500: $" << account.getBalance() << std::endl;

    account.withdraw(200.0);
    std::cout << "After withdrawing $200: $" << account.getBalance() << std::endl;
    account.withdraw(2000.0); // Attempt to withdraw more than the balance
    // Attempting to directly modify the balance will result in a compilation error:
    // account.balance = 5000.0; // Error: 'balance' is private within this context
}