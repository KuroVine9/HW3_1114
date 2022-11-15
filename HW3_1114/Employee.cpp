#pragma once
#include <iostream>

class Employee {
private:
	char* name;
public:
	Employee(const char* name) {
		this->name = new char[strlen(name) + 1];	// �������� �̸� �Ҵ�
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		std::cout << "name: " << name << std::endl;
	}
	virtual int GetPay() const { return 0; }
	virtual void ShowSalaryInfo() const = 0;	// �ڽ� Ŭ�������� ������ �����ؾ� �ϴ� �����Լ�

	~Employee() {
		delete[]name;
	}
};