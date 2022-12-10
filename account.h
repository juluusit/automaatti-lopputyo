#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    public:
        Account(std::string name, int saldo);
        int getSaldo();
        std::string getName();
        void addMoney(int amount);
        void takeMoney(int amount);

    private:
        int mSaldo;
        std::string mName;

};

#endif // ACCOUNT_H
