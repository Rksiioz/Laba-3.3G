#include "Money.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account : public Money{
public:
    Account();
    Account(string name, int accNumber, double interest, Money sum);
    Account(const Account &other);

    void read();
    void init(std::string name, int accNumber, double interest, Money sum);
    void display() const;
    std::string toString() const;
    void changeOwner(std::string name);
    void withdraw(Money amount);
    void deposit(Money amount);
    void accrual();
    Money toDollars() const;
    Money toEuro() const;
    std::string numberToWords(int number) const;

    Account& operator=(const Account &other);
    friend istream& operator>>(istream& is, Account& acc);
    friend ostream& operator<<(ostream& output, const Account& acc);
    operator string() const;
    Account& operator++();
    Account operator++(int);
    Account& operator--();
    Account operator--(int);

public:
    int getAccNumber() const;
    void setAccNumber(int accNumber);
    double getInterest() const;
    void setInterest(double interest);
    const string &getName() const;
    void setName(const string &name);
    const Money &getSum() const;
    void setSum(const Money &sum);

private:
    int accNumber;
    double interest;
    string name;
    Money sum;
};