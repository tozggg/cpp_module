/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:52:06 by taejkim           #+#    #+#             */
/*   Updated: 2022/01/26 13:57:16 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "created" << endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "created" << endl;
}

Account::~Account(void)
{
	--_nbAccounts;
	_totalAmount -= _amount;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "closed" << endl;
}


int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t		curtime = time(NULL);
	struct tm	*tm = localtime(&curtime);
	char		str[18];

	strftime(str, 18, "[%G%m%d-%H%M%S]", tm);
	cout << str << " ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "deposit:" << deposit << ";";

	++_nbDeposits;
	_amount += deposit;
	++_totalNbDeposits;
	_totalAmount += deposit;

	cout << "amount:" << _amount << ";";
	cout << "nb_deposits:" << _nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	
	if (_amount < withdrawal)
	{
		cout << "withdrawal:refused" << endl;
		return (false);
	}

	cout << "withdrawal:" << withdrawal << ";";

	++_nbWithdrawals;
	_amount -= withdrawal;
	++_totalNbWithdrawals;
	_totalAmount -= withdrawal;

	cout << "amount:" << _amount << ";";
	cout << "nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}
