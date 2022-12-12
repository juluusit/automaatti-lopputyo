#include <iostream>
#include <vector>

#include "account.h"
#include "owner.h"

using namespace std;

void addMoney(Account & account)
{
    int amount;
    cout << "how much to add (integer) : ";
    cin >> amount;
    account.addMoney(amount);
}

void takeMoney(Account & account)
{
    int amount;
    cout << "how much to take (integer) : ";
    cin >> amount;
    account.takeMoney(amount);
}

void addTestData(vector<Owner> & ownerList)
{
    Owner testOwner("Julia");
    Owner testOwner2 ("Kalle");
    Account testAccount("tukirahasto", 500);
    testOwner.addAccount(testAccount);
    Account testAccount2("saastot", 1000);
    testOwner.addAccount(testAccount2);
    Account testAccount3 ("kayttotili", 87);
    Account testAccount4 ("kayttotili", 760);
    testOwner.addAccount(testAccount3);
    testOwner2.addAccount(testAccount4);
    ownerList.push_back(testOwner);
    ownerList.push_back(testOwner2);
}

int main()
{
    int userInput;
    cout<<"WELCOME TO JULLE`S ATM"<<endl;
    cout << "=====================================" << endl;
    vector<Owner> ownerList = vector<Owner>();
    addTestData(ownerList);

    while (true)
    {
        Owner choosenOwner("");
        cout << "available users : " << endl;

        for (int id=0; id < ownerList.size(); id++)
        {
            cout << id << ". " << ownerList.at(id).getName() << endl;
        }

        cout << "=====================================" << endl;
        cout << "choose user (integer) : ";

        cin >> userInput;
        int accountIndex;
        int userIndex;

        if (userInput > ownerList.size() || userInput < 0)
        {
            cout << "no such user, exiting.." << endl;
            return 0;
        }

        choosenOwner = ownerList.at(userInput);
        userIndex = userInput;

        cout << "choosen owner is: " << choosenOwner.getName() << endl;
        cout << "=====================================" << endl;
        cout << "available accounts:" << endl;

        auto accountList = choosenOwner.getAccountList();

        for (int id = 0; id < accountList.size(); id++)
        {
            cout << id << ". " << accountList.at(id).getName() << endl;
        }

        cout << "=====================================" << endl;

        cout << "choose account (integer): ";
        cin >> userInput;

        Account choosenAccount("", 0);

        if (userInput > accountList.size() || userInput < 0)
        {
            cout << "no such account, exiting.." << endl;
            return 0;
        }

        choosenAccount = accountList.at(userInput);
        accountIndex = userInput;

        cout << "=====================================" << endl;
        cout << "choosen account is: " << choosenAccount.getName() << endl;
        cout << "=====================================" << endl;
        cout << "possible operations: " << endl;
        cout << "1. check saldo" << endl;
        cout << "2. add money" << endl;
        cout << "3. take money" << endl;
        cout << "=====================================" << endl;
        cout << "choose operation (1, 2 or 3): ";
        cin >> userInput;
        cout << "=====================================" << endl;

        cout << "choose operation: " << userInput << endl;
        cout << "=====================================" << endl;

        switch(userInput)
        {
            case 1:
                cout << "current saldo: " << choosenAccount.getSaldo() << endl;
                break;
            case 2:
                addMoney(choosenAccount);
                cout << "new saldo: " << choosenAccount.getSaldo() << endl;
                break;
            case 3:
                takeMoney(choosenAccount);
                cout << "new saldo: " << choosenAccount.getSaldo() << endl;
                break;
            default:
                cout << "invalid operation, exiting.." << endl;
                break;
        }

        cout << "=====================================" << endl;

        choosenOwner.updateAccountListItem(accountIndex, choosenAccount);
        ownerList.at(userIndex) = choosenOwner;

    }
}
