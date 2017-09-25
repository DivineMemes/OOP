#include "piggyBank.h"

void Piggybank::deposit(float DepositedAmount)
{
	currentBalance += DepositedAmount;
}

float Piggybank::withdraw()
{
	float amountWithdrawing = currentBalance;
	currentBalance = 0;

	return amountWithdrawing;
}

float Piggybank::balance()
{
	return currentBalance;
}
