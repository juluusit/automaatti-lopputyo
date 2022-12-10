#ifndef OWNER_H
#define OWNER_H
#include <iostream>
#include <vector>

#include "account.h"

class Owner
{
    public:
        Owner(std::string name);
        void addAccount(Account account);
        std::string getName();


    private:
        std::string mName;
        std::vector<Account> mAccounts;



};

#endif // OWNER_H
