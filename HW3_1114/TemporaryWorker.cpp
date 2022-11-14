#pragma once
#include "Employee.cpp"

class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay)
		:Employee::Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) { workTime += time; }
	int GetPay() const { return workTime * payPerHour; }
	void ShowSalaryInfo() const {
		ShowYourName();
		std::cout << "salary: " << GetPay() << std::endl << std::endl;
	}
};