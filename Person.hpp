#pragma once
#include <string>
#include "Address.hpp"

class Person
{
    private:
        std::string pesel_;
        std::string firstName_;
        std::string lastName_;
        char sex_;
        Address* address_;
    public:
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address);
        virtual ~Person() {}
        std::string getPesel() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        virtual int getIndex() const = 0;
        virtual int getSalary() const = 0;
        bool verifyPesel(std::string pesel);
        void showPerson() const;
};
