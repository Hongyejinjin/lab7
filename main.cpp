#include <iostream>

struct CDAccount
{
    double balance;
    double interest;
};

CDAccount doublebalance(const CDAccount& oldccount)
{
    CDAccount newccount;
    newccount.balance = oldccount.balance * 2;
    newccount.interest = oldccount.interest;

    return newccount;
}

int main()
{
    CDAccount acc1;
    acc1.balance = 1000;
    acc1.interest = 0.05;

    CDAccount acc2;
    acc2 = doublebalance(acc1);
}