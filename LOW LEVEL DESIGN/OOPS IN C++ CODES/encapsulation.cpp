#include<iostream>
#include<vector>
using namespace std;
class encapsulation{
    private:

    int x;

    public:

    void set(int a)
    {
        x=a;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    encapsulation obj;
    obj.set(5);

    cout<<obj.get();

    return 0;
}

// Example 

class BankAccount{
    public:

    private:
    double balance;
    string ownerName;
    vector<pair<string, double>> transactionHistory;

    public:
    BankAccount(string name, double balance){
        this->ownerName = name;
        this->balance = balance;
    }

    void withdraw(double amount){
        if(amount <= 0){
            throw new invalid_argument("Withdrawal amount must be positive.");
        }

        if(amount > balance){
            throw new invalid_argument("Insufficient funds.");
        }

        balance -= amount;
        transactionHistory.push_back(make_pair("Withdrawal", amount));
    }

    int getBalance(){
        return balance;
    }
};

/*


In normal term encapsulation is defined as wrapping up of data and information under a single unit.
Encapsulation define as binding together the data and function that manipulates them.
Class Controls the access to the data members and member functions of the class (own internal state and exposing what other classes need to interact with it).


Advantages

Increased security of data.
Encapsulation allows access to a level without revealing the complex details below that level.
It reduces human errors.
Makes the application easier to understand.

*/
