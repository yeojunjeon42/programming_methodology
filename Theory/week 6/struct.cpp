#include <iostream>
using namespace std;

struct AccountV1 {
    double balance;
    double interestRate;
    int term;
}; //must have semicolon here

void futureValue(AccountV1& account) {

    account.balance *= (1+account.interestRate) * account.term;
}

int main() {

    AccountV1 account = {1000,0.03,2};

    futureValue(account);

    cout << account.balance << endl;
    cout << account.interestRate << endl;
    cout << account.term << endl;

}
