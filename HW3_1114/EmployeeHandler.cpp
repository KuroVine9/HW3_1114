#include "Employee.cpp"
#include <vector>

class EmployeeHandler {
private:
	std::vector<Employee*> empList;	// 업캐스팅을 위한 슈퍼클래스 포인터 배열
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
		for (auto a : empList) delete(a);	// 배열에 저장되어있는 객체 메모리 해제
	}
};