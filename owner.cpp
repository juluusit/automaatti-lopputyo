#include "owner.h"

Owner::Owner(std::string name)
{
    mName = name;
    mAccounts = std::vector<Account>();
}

void Owner::addAccount(Account account)
{
    mAccounts.push_back(account);
}

std::string Owner:: getName()
{
    return mName;
}

std::vector<Account> Owner::getAccountList()
{
    return mAccounts;
}

void Owner::updateAccountListItem(int idx, Account account)
{
    mAccounts.at(idx) = account;
}



