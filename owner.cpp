#include "owner.h"

Owner::Owner(std::string name)
{
    mName = name;
    mAccounts = std::vector<Account>();

}

void Owner::addAccount(Account account)
{
    std::cout<<"adding new account with name: "<< account.getName()<<std::endl;
    mAccounts.push_back(account);
}

std::string Owner:: getName()
{
    return mName;
}


