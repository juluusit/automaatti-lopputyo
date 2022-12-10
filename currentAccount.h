#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "account.h"

class CurrentAccount: Account
{
public:
    CurrentAccount(int saldo);
    void takeMoney(int amount);

};

#endif // CURRENTACCOUNT_H
