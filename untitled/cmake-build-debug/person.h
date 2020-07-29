//
// Created by computer on 7/28/2020.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H
#include <iostream>
#include <sstream>
#include <string>

class person {
public:
    person(std::string);
    ~person();
    virtual std::string getPerson()const;
    virtual void setPerson(std::string);
    virtual std::string display()const;
private:
    std::string _per;
};


#endif //UNTITLED_PERSON_H
