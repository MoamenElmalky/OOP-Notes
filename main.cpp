#include <iostream>
#include <string>
using namespace std;

class Account {
private:
  string owner;
  double balance;
  static int accountCount;

public:
  Account() {
    owner = "Unknown";
    balance = 0.0;
    accountCount++;
  }
  Account(string o, double b) {
    owner = o;
    balance = b;
    accountCount++;
  }
  string getOwner() { return owner; }
  double getBalance() { return balance; }
  void setOwner(string o) { owner = o; }
  void setBalance(double b) {
    if (b < 0) {
      cout << "Balance cannot be negative." << endl;
    } else
      balance = b;
  }
  void deposit(double amount) { balance += amount; }
  void deposit(double amount, double bonus) {
    balance = balance + amount + bonus;
  }
  void printInfo() {
    cout << getOwner() << "'s account balance is: " << getBalance() << endl;
  }
  static int getAccountCount() { return accountCount; }
  void transfer(Account &to, double amount) {
    if (balance - amount > 0 && amount > 0) {
      balance -= amount;
      to.balance += amount;
    }
  }
  void addAccount(Account &newAccount) { balance += newAccount.getBalance(); }
};

int Account::accountCount = 0;

int main() {
  Account acc1;                   // uses default constructor
  Account acc2("Moamen", 1000.0); // uses parameterized constructor
  Account acc3("Amin", 500.0);    // uses parameterized constructor
  acc1.deposit(200.0);            // uses deposit method
  acc2.deposit(300.0, 50.0);      // uses overloaded deposit method
  acc3.setBalance(-100.0);        // attempts to set a negative balance
  acc1.transfer(acc2, 400);       // transfers balance from acc2 to acc1
  acc1.printInfo();               // prints acc1's info
  acc2.printInfo();               // prints acc2's info
  Account mergedAccount;          // creates a new merged account
  mergedAccount.addAccount(acc2); // adds acc2's balance to mergedAccount
  mergedAccount.addAccount(acc3); // adds acc3's balance to mergedAccount
  mergedAccount.printInfo();      // prints mergedAccount's info
  cout << "Total number of accounts created: " << Account::getAccountCount()
       << endl; // prints total account count
  return 0;
}
