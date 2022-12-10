#include <iostream>
#include <vector>

#include "account.h"
#include "owner.h"

using namespace std;

void addTestData(vector<Owner> & ownerList)
{
    Owner testOwner("julle");
    Owner testOwner2 ("Sonja");
    Account testAccount("jullen tukirahasto", 500);
    testOwner.addAccount(testAccount);
    Account testAccount2("Lauran massit", 1000);
    testOwner.addAccount(testAccount2);
    Account testAccount3 ("sonjan massit" ,87);
    testOwner.addAccount(testAccount3);
    ownerList.push_back(testOwner);
    ownerList.push_back(testOwner2);
}

int main()
{
    cout<<"WELCOME TO JULLE`S ATM"<<endl;
    vector<Owner> ownerList = vector<Owner>();
    addTestData(ownerList);
    cout<<ownerList.size()<<endl;



    while (true)
    {
        cout<<"available users : "<<endl;

        for (auto & item : ownerList)
        {
            cout<< item.getName()<<endl;        }

        cout<<"choose account :"<<endl;

        break;


    }
}
