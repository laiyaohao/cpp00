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
  std::time_t now = std::time(0);         // Get current time
  std::tm* localTime = std::localtime(&now); // Convert to local time

  oss << "[" 
      << (localTime->tm_year + 1900)     // Year (tm_year is years since 1900)
      << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)   // Month (tm_mon is 0-based)
      << std::setw(2) << std::setfill('0') << localTime->tm_mday        // Day
      << "_"
      << std::setw(2) << std::setfill('0') << localTime->tm_hour        // Hours
      << std::setw(2) << std::setfill('0') << localTime->tm_min         // Minutes
      << std::setw(2) << std::setfill('0') << localTime->tm_sec         // Seconds
      << "]";
  std::cout << oss.str() << std::endl;
}

void  Account::displayAccountsInfos()
{
  // display time, which idk how to do yet
  Account::_displayTimestamp();
}

Account::~Account(void)
{
  //destrcutor
}

void  Account::makeDeposit(int deposit)
{
  (void)deposit;
}

bool  Account::makeWithdrawal(int withdrawal)
{
  (void)withdrawal;
  return (true);
}

void  Account::displayStatus(void) const
{

}

Account::Account(void)
{

}