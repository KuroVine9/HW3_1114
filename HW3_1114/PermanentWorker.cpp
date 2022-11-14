#pragma once
#include "Employee.cpp"

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(const char* name, int money)
		:Employee::Employee(name), salary(money) {}
	int GetPay() const { return salary; }
	void ShowSalaryInfo() const {
		Employee::ShowYourName();
		std::cout << "salary: " << GetPay() << std::endl << std::endl;
	}
};