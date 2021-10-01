//
// Created by hloi on 9/17/2021.
//

#ifndef CSC211CH01PERSON_PERSON_H
#define CSC211CH01PERSON_PERSON_H


#include <string>
#include <ostream>


using std::string;
using std::ostream;

class Person {
public:
    Person();
    Person(const Person& p);  // copy constructor
    Person(string first, string family, string ID, int birth);
    Person& operator=(const Person& per);
    bool operator==(const Person& per) const;
    bool operator!=(const Person& per) const;

    friend ostream& operator<<(ostream& os, const Person& per);

    const string &getGivenName() const;

    const string &getFamilyName() const;

    const string &getId() const;
    ~Person() { delete given_name; }
    int getBirthYear() const;
    void setGivenName(const string &givenName);
private:
    string* given_name;



private:
    string family_name;
    string ID;
    int birth_year;

    static const int VOTE_AGE = 18;
};


#endif //CSC211CH01PERSON_PERSON_H
