#pragma once
#include "PermanentWorker.cpp"

class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio)
		:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesResult(int value) { salesResult += value; }
	int GetPay() const {
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const {
		Employee::ShowYourName();
		std::cout << "salary: " << GetPay() << std::endl << std::endl;
	}
};