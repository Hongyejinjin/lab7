#include <iostream>

struct CDAccount
{
    double deposit{ 100 };
    double interestRate{ 6.9 };
    int month{ 6 };
};

void setAccount(CDAccount& account)
{
    std::cout << "Enter account deposit: $";
    std::cin >> account.deposit;
    std::cout << "Enter account interest rate: ";
    std::cin >> account.interestRate;
    std::cout << "Enter the number of months until maturity: ";
    std::cin >> account.month;
}

void showAccount(const CDAccount& account)
{
    double balance{ account.deposit * (1 + account.interestRate / 100.0 * account.month / 12.0)};
    std::cout << "When your deposit " << account.deposit << " matures in " << account.month << " months, with " << account.interestRate << " interest rate, " << std::endl;
    std::cout << "it will have a balance of " << balance << std::endl;
}

int main()
{
    CDAccount account{};
    setAccount(account);
    showAccount(account);
    return 0;
}