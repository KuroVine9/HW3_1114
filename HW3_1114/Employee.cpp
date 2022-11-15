#pragma once
#include <iostream>

class Employee {
private:
	char* name;
public:
	Employee(const char* name) {
		this->name = new char[strlen(name) + 1];	// 동적으로 이름 할당
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		std::cout << "name: " << name << std::endl;
	}
	virtual int GetPay() const { return 0; }
	virtual void ShowSalaryInfo() const = 0;	// 자식 클래스들이 무조건 구현해야 하는 가상함수

	~Employee() {
		delete[]name;
	}
};