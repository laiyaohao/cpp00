#include "./Account.hpp"

Account::Account(int initial_deposit)
{
  _amount = initial_deposit;
}

int Account::getNbAccounts(void)
{
  return (Account::_nbAccounts);
}

int Account::getNbDeposits(void)
{
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return (Account::_totalNbWithdrawals);
}

int Account::getTotalAmount(void)
{
  return (Account::_totalAmount);
}

void  Account::displayAccountsInfos()
{
  // display time, which idk how to do yet
  
}