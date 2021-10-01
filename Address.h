//
// Created by hloi on 9/27/2021.
//

#ifndef CSC211CH01PERSON_ADDRESS_H
#define CSC211CH01PERSON_ADDRESS_H
#include <string>
using std::string;

class Address {
public:
    Address();
    Address(const Address& addr);  // copy constructor
    Address(string house, string street1, string street2, string state, string zip_code);

private:
    string house_num;
    string street_name1;
    string street_name2;
    string state;
    string zip_code;
};


#endif //CSC211CH01PERSON_ADDRESS_H
