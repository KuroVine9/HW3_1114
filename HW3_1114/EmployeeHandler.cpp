#include "Employee.cpp"
#include <vector>

class EmployeeHandler {
private:
	std::vector<Employee*> empList;	// ��ĳ������ ���� ����Ŭ���� ������ �迭
public:
	void AddEmployee(Employee* emp) {
		empList.push_back(emp);
	}
	void ShowAllSalaryInfo() const {
		for (auto a : empList) a->ShowSalaryInfo();
	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (auto a : empList) sum += a->GetPay();
		std::cout << "salary sum: " << sum << std::endl;
	}
	~EmployeeHandler() {
		for (auto a : empList) delete(a);	// �迭�� ����Ǿ��ִ� ��ü �޸� ����
	}
};