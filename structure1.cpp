#include <iostream>
struct CDAccount
{
    double deposit{ 100 };
    double interestRate{ 5 };
    int month{ 12 };
}; 
CDAccount doubleInterest (const CDAccount& oldAccount)
{
    CDAccount temp;
    temp = oldAccount;
    temp.interestRate = 2 * oldAccount.interestRate;
    return temp;
}
int main()
{
    CDAccount myAccount, yourAccount;
    yourAccount = doubleInterest(myAccount);
    std::cout << yourAccount.interestRate << std::endl;
    
    return 0;


}