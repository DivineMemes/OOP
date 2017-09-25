#pragma once

class Piggybank
{
private:
	float currentBalance;
public:
	void deposit(float DepositedAmount);
	float withdraw();
	float balance();
};