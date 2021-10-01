//
// Created by hloi on 9/27/2021.
//

#ifndef CSC211CH01PERSON_EMPLOYEE_H
#define CSC211CH01PERSON_EMPLOYEE_H
#include "Person.h"
#include "Address.h"

class Employee : public Person {
public:
    Employee();
    Employee(Person p, Address addr1) : Person(p), addr(addr1) {}

private:
    Address addr;
};


#endif //CSC211CH01PERSON_EMPLOYEE_H
