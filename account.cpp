#include <iostream>

#include "account.h"


Account::Account(std::string name,int saldo)
{
    mName = name;
    mSaldo = saldo;
}

int Account::getSaldo()
{
    return mSaldo;
}

std::string Account::getName()
{
    return mName;
}

void Account::addMoney(int amount)
{
    mSaldo = mSaldo + amount;
}

void Account::takeMoney(int amount)
{
    if (amount>mSaldo)
    {
        std::cout << "not enough money, transfer failed" <<std::endl;
        return;
    }

    mSaldo = mSaldo - amount;
}
