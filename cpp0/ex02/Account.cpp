#include "Account.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts++;
	std::string tmp[] = {"index:", ";amount:", ";created"};
	int			tmp2[] = {this->_accountIndex, this->_amount};
	size_t i;

	Account::_totalAmount += initial_deposit;	
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	for (i = 0; i < (sizeof(tmp2) / sizeof(int)); i++)
		std::cout << tmp[i] << tmp2[i];
	std::cout << tmp[i] << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::string tmp[] = {"index:", ";amount:", ";closed"};
	int			tmp2[] = {this->_accountIndex, this->_amount};
	size_t i;

	for (i = 0; i < (sizeof(tmp2) / sizeof(int)); i++)
		std::cout << tmp[i] << tmp2[i];
	std::cout << tmp[i] << std::endl;
}


int	Account::getNbAccounts(void) {return (Account::_nbAccounts);}

int	Account::getNbDeposits(void) {return (Account::_totalNbDeposits);}

int	Account::getTotalAmount(void) {return(Account::_totalAmount);}

int	Account::getNbWithdrawals(void) {return (Account::_totalNbWithdrawals);}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::string tmp[] = {"accounts:", ";total:", ";deposits:", ";withdrawals:"};
	int tmp2[] = {t::getNbAccounts(), t::getTotalAmount(), t::getNbDeposits(), t::getNbWithdrawals()};
	size_t	i;

	for (i = 0; i < (sizeof(tmp)/ sizeof(std::string)); i++)
		std::cout << tmp[i] << tmp2[i];
	std::cout << std::endl;
}

void Account::makeDeposit(int j)
{
	std::string tmp3[] = {"index:",";p_amount:",";deposit:",";amount:", ";nb_deposits:"};
	int	tmp4[] =  {this->_accountIndex, this->_amount, j, this->_amount + j, ++this->_nbDeposits};
	size_t i;

	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	for (i = 0; i < (sizeof(tmp3)/ sizeof(std::string)); i++)
		std::cout << tmp3[i] << tmp4[i];
	std::cout << std::endl;
	Account::_totalAmount += j;
	this->_amount += j;
}

bool Account::makeWithdrawal(int j)
{
	std::string tmp[] = {"index:", ";p_amount:", ";withdrawal:refused"};
	int			tmp2[] = {this->_accountIndex, this->_amount};
	size_t i;

	if ((this->_amount - j) < 0)
	{
		Account::_displayTimestamp();
		for (i = 0; i < (sizeof(tmp2) / sizeof(int)); i++)
			std::cout << tmp[i] << tmp2[i];
		std::cout << tmp[i] << std::endl;
		return (false);
	}
	std::string tmp3[] = {"index:",";p_amount:",";withdrawal:",";amount:", ";nb_withdrawals:"};
	int	tmp4[] =  {this->_accountIndex, this->_amount, j, this->_amount - j, ++this->_nbWithdrawals};
	Account::_displayTimestamp();
	for (i = 0; i < (sizeof(tmp3)/ sizeof(std::string)); i++)
		std::cout << tmp3[i] << tmp4[i];
	std::cout << std::endl;
	Account::_totalAmount -= j;
	Account::_totalNbWithdrawals++;
	this->_amount -= j;

	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::string tmp[] = {"index:", ";amount:", ";deposits:", ";withdrawals:"};
	int tmp2[] = {this->_accountIndex, this->_amount, this->_nbDeposits, this->_nbWithdrawals};
	size_t	i;

	for (i = 0; i < (sizeof(tmp)/ sizeof(std::string)); i++)
		std::cout << tmp[i] << tmp2[i];
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t tmp = std::time(NULL);
	std::tm* now = std::localtime(&tmp); 
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon << now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";
}