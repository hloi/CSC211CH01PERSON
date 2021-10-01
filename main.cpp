#include <iostream>
#include "Person.h"
using namespace std;

//int copyConstructor(Person p) {
//    return 0;
//}

int main() {
    Person p1("Hao", "Loi", "11111", 1966);
    Person p2("Hao", "Loi", "11111", 1977);
    p1 = p2;
    Person* p3 = new Person("John", "Loi", "11111", 1977);
    Person* p4 = new Person();  // copy constructor for pointers
    *p4 = *p3;  // assignment operator for pointers


    p3->setGivenName("Smith");

    // int t = copyConstructor(p1);

    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;
    cout << p2 << endl;
    cout << p1 << endl;
    cout << *p3 << endl;
    cout << *p4 << endl;
    delete p3;
    delete p4;
    return 0;
}
