//
// Created by hloi on 9/17/2021.
//
#include <ostream>
#include "Person.h"
#include <algorithm>
using std::string;
using std::ostream;
using std::swap;


Person::Person() {
     given_name = "";
     family_name = "";
     ID = "";
     birth_year = 1900;
}



Person::Person(string first, string family, string ID, int birth) {
given_name = first;
family_name = family;
this->ID = ID;
birth_year = 1900;
}

bool Person::operator==(const Person& per) const {
    return (this->family_name == per.family_name &&
    this->given_name == per.given_name);
}
bool Person::operator!=(const Person& per) const {
    return !(*this == per);
}

ostream& operator<<(ostream& os, const Person& per) {
    os  << "Given name: " << per.given_name << "\n";
    os << "Family name: " << per.family_name << "\n";
    os << "ID number: " << per.ID << "\n";
    os << "Year of birth: " << per.birth_year << "\n";

    return os;
}

const string &Person::getGivenName() const {
    return given_name;
}

const string &Person::getFamilyName() const {
    return family_name;
}

const string &Person::getId() const {
    return ID;
}

int Person::getBirthYear() const {
    return birth_year;
}

Person::Person(const Person &p) {
    given_name = p.given_name;
    family_name = p.family_name;
    ID = p.ID;
    birth_year = p.birth_year;
}

void Person::setGivenName(const string &givenName) {
    given_name = givenName;
}

Person &Person::operator=(const Person &p) {
    given_name = p.given_name;
    family_name = p.family_name;
    ID = p.ID;
    birth_year = p.birth_year;
    return *this;
}
