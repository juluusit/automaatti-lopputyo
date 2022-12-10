#include <iostream>

#include "account.h"
#include "currentAccount.h"


CurrentAccount::CurrentAccount(int saldo): Account(saldo) {}

void CurrentAccount::takeMoney(int amount)
{
    if (amount>mSaldo)
    {
        std::cout << "not enough money, transfer failed" <<std::endl;
        return;
    }

    mSaldo = mSaldo - amount;
}
