
class Account {
  private String owner;
  private int balance;
  private static int count = 0;

  Account() {
    owner = "unknown";
    balance = 0;
    count += 1;
  }

  Account(String o) {
    this();
    owner = o;
  }

  Account(int val) {
    this();
    balance = val;
  }

  Account(int val, String p) {
    this();
    owner = p;
    balance = val;
  }

  int getBalance() {
    return balance;
  }

  String getOwner() {
    return owner;
  }

  void setBalance(int value) {
    if (value >= 0)
      balance = value;
  }

  void setOwner(String s) {
    owner = s;
  }

  void deposit(int value) {
    balance += value;
  }

  void deposit(int value, int bonus) {
    balance = balance + value + bonus;
  }

  void PrintInfo() {
    System.out.printf("The user is %s and the balance is %d%n", getOwner(), getBalance());
  }

  void transfer(Account other, int amount) {
    if (amount > 0 && balance - amount >= 0) {
      balance -= amount;
      other.balance += amount;
    }
  }

  Account add(Account other) {
    return new Account(balance + other.balance, owner);
  }

  static int getCount() {
    return count;
  }
};

public class main {
  public static void main(String[] args) {
    Account acc1 = new Account();
    Account acc2 = new Account("Ahmed");
    Account acc3 = new Account(5000);
    Account acc4 = new Account(1000, "Omar");
    acc3.setBalance(-100); // should be rejected
    acc3.PrintInfo(); // should be 5000 , unknown
    acc3.transfer(acc2, 100); // acc3's balance now should be 4900 nad acc2's should be 100
    acc1.PrintInfo(); // should be 0 , unknown
    acc2.PrintInfo(); // should be 100 , Ahmed
    Account merged = acc1.add(acc2);
    merged.PrintInfo(); // should be 100, unknown
    acc1.PrintInfo(); // should be unchanged by add -> 0
    System.out.println(Account.getCount()); // 5 here
  }
};
