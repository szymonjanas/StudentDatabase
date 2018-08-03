#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

class Student : public Person
{
private:
    int index_;
    public:
    Student(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address, int index);
    virtual ~Student();
    virtual int getIndex() const;
    void setIndex(int);
    void showStudent() const;
    virtual int getSalary() const;
    void setSalary(int);
};
