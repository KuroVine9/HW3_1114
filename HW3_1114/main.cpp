#include "TemporaryWorker.cpp"
#include "SalesWorker.cpp"
#include "PermanentWorker.cpp"
#include "EmployeeHandler.cpp"

int main() {
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("heeseok", 500));
	handler.AddEmployee(new PermanentWorker("eunwoo", 1000));

	TemporaryWorker* tWorker1 = new TemporaryWorker("gangjoon", 500);
	tWorker1->AddWorkTime(5);
	handler.AddEmployee(tWorker1);

	SalesWorker* sWorker1 = new SalesWorker("jungkook", 1000, 0.1);
	sWorker1->AddSalesResult(7000);
	handler.AddEmployee(sWorker1);

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();

	return 0;
}