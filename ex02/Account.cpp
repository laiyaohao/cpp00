#include "./Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
  Account::_amount = initial_deposit;
  Account::_accountIndex = Account::_nbAccounts;
  Account::_nbAccounts++;
  Account::_totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";amount:" << Account::_amount;
  std::cout << ";created" << std::endl;
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

void  Account::_displayTimestamp(void)
{
  std::ostringstream oss;
  std::time_t now = std::time(0);
  std::tm* localTime = std::localtime(&now);

  oss << "[" 
      << (localTime->tm_year + 1900)
      << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
      << std::setw(2) << std::setfill('0') << localTime->tm_mday
      << "_"
      << std::setw(2) << std::setfill('0') << localTime->tm_hour
      << std::setw(2) << std::setfill('0') << localTime->tm_min
      << std::setw(2) << std::setfill('0') << localTime->tm_sec
      << "]";
  std::cout << oss.str();
}

void  Account::displayAccountsInfos()
{
  Account::_displayTimestamp();
  std::cout << " accounts:" << Account::getNbAccounts();
  std::cout << ";total:" << Account::getTotalAmount(); 
  std::cout << ";deposits:" << Account::getNbDeposits();
  std::cout << ";withdrawals:" << Account::getNbWithdrawals();
  std::cout << std::endl;
}

int Account::checkAmount(void) const
{
  return (Account::_amount);
}

Account::~Account(void)
{
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";amount:" << Account::_amount;
  std::cout << ";closed" << std::endl;
}

void  Account::makeDeposit(int deposit)
{
  Account::_nbDeposits += 1;
  Account::_totalNbDeposits += 1;
  Account::_totalAmount += deposit;
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";p_amount:" << Account::_amount;
  std::cout << ";deposit:" << deposit;
  Account::_amount += deposit;
  std::cout << ";amount:" << Account::_amount;
  std::cout << ";nb_deposits:"<< Account::_nbDeposits;
  std::cout << std::endl;
}

bool  Account::makeWithdrawal(int withdrawal)
{
  (void)withdrawal;
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";p_amount:" << Account::_amount;
  if (Account::_amount < withdrawal)
  {
    std::cout << ";withdrawal:refused" << std::endl;
    return (false);
  }
  std::cout << ";withdrawal:" << withdrawal;
  Account::_amount -= withdrawal;
  Account::_totalAmount -= withdrawal;
  std::cout << ";amount:" << Account::_amount;
  Account::_nbWithdrawals += 1;
  Account::_totalNbWithdrawals += 1;
  std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals;
  std::cout << std::endl;
  return (true);
}

void  Account::displayStatus(void) const
{
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";amouunt:" << Account::_amount;
  std::cout << ";deposits:" << Account::_nbDeposits;
  std::cout << ";withdrawals:" << Account::_nbWithdrawals;
  std::cout << std::endl;
}

Account::Account(void)
{
  Account::_amount = 0;
  Account::_accountIndex = Account::_nbAccounts;
  Account::_nbAccounts++;
  Account::_totalAmount += 0;
  Account::_displayTimestamp();
  std::cout << " index:" << Account::_accountIndex;
  std::cout << ";amount:" << Account::_amount;
  std::cout << ";created" << std::endl;
}