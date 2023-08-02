// Student Generated Code Assignment
// Ashur Baroutta

#include <iostream>
using namespace std;


class SavingsAccount{

  public: 
        // constructors
        SavingsAccount();
        SavingsAccount(int initDollars, int initCents);
        // member functions
        void deposit(int depodollar, int depocents);
        void withdraw(int withdrawd, int withdrawc);
        void balance();

  private:
        // class data
        int dollars, cents;
        void normalizecents();

};


int main() {

  int initDollars, initCents, depodollars, depocents, withdrawdollars, withdrawcents;


  // user requets for bank accounts
  cout << "Enter initial value amount for bank1 (dollars then cents) " << endl;
  cin >> initDollars >> initCents;
  SavingsAccount bank1(initDollars, initCents);

  cout << "What is the deposit amount for bank1 (dollars then cents)?" << endl;
  cin >> depodollars >> depocents;
  bank1.deposit(depodollars,depocents);

  cout << "Enter the withdraw amount for bank1 (dollars then cents)" << endl;
  cin >> withdrawdollars >> withdrawcents;
  bank1.withdraw(withdrawdollars, withdrawcents);

  cout << "Enter initial value amount for bank2 (dollars then cents) : " << endl;
  cin >> initDollars >> initCents;
  SavingsAccount bank2(initDollars, initCents);

  cout << "What is the deposit amount for bank2 (dollars then cents) ?" << endl;
  cin >> depodollars >> depocents;
  bank2.deposit(depodollars,depocents);

  cout << "Enter the withdraw amount for bank2 (dollars then cents)" << endl;
  cin >> withdrawdollars >> withdrawcents;
  bank2.withdraw(withdrawdollars, withdrawcents);

  // display data
  cout <<"Bank1 ";
  bank1.balance();
  cout <<"Bank2 ";
  bank2.balance();
  return 0;
} 

// constructors
SavingsAccount::SavingsAccount(){
  dollars = 0;
  cents = 0;
}

SavingsAccount::SavingsAccount(int initDollars, int initCents){
  dollars = initDollars;
  cents = initCents;
  normalizecents();
}


// member function implementation

// deposit method 
void SavingsAccount::deposit(int depodollar, int depocents){
  dollars+= depodollar;
  cents += depocents;
  normalizecents();
}

// withdraw method
void SavingsAccount::withdraw(int withdrawd, int withdrawc){
  dollars -= withdrawd;
  cents -= withdrawc;
  normalizecents();
}

// show balance
void SavingsAccount::balance(){
  cout << "The current balance is : $" << dollars << "." << cents << endl;
}

// normalize cent amounts for went cents is over 100 
void SavingsAccount::normalizecents(){

    if(cents>=100){
      dollars += cents/100;
      cents = cents %100;
    }
    if(cents < 0){
      dollars -=1;
      cents += 100;
    }
}