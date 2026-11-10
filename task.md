# Task: Bank Account

Implement this program in Python, C++, Java and C#.

## The task

Create a class `Account` with these requirements:

**1. Attributes (data hiding)**
- `owner` (string) and `balance` (number), both **private**.

**2. Constructors**
- A **default constructor** that sets `owner` to `"Unknown"` and `balance` to `0`.
- A **parameterized constructor** that takes the owner and balance.

**3. Getters and setters**
- A getter for each attribute.
- A setter for `balance` that **rejects negative values**, which shows why setters exist.

**4. Method overloading**
- `deposit(amount)`
- `deposit(amount, bonus)`, which deposits `amount + bonus`.

**5. A method that calls another method**
- `printInfo()` should call the getters instead of touching the attributes directly.

**6. Static member**
- A static counter that tracks **how many accounts have been created**, plus a static method that returns it.

**7. Passing an object as an argument**
- `transfer(otherAccount, amount)` takes money from this account and adds it to the other one.

**8. Returning an object**
- `add(otherAccount)` returns a **new** `Account` whose balance is the sum of both balances.

## Main program (test it)

1. Create one account with the default constructor and two with the parameterized one.
2. Deposit using both versions of `deposit`.
3. Try setting a negative balance and see that it's rejected.
4. Transfer money from one account to another and print both with `printInfo()`.
5. Use `add` to create a merged account and print it.
6. Print the static counter.

## Language notes

- **Python** doesn't support overloading the way Java, C++, and C# do. Use a default parameter (`bonus=0`) instead. It has no real `private` either, so use `__balance`, which is the closest equivalent.
- **C++** needs the static counter defined **outside** the class (`int Account::count = 0;`), which is a common beginner mistake.
- **Java and C#** are straightforward and use `static` exactly as in the notes.

