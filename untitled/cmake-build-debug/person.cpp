//
// Created by computer on 7/28/2020.
//

#include "person.h"

person::person(std::string p){
   setPerson(p);
}
person::~person(){
}
std::string person::getPerson()const{
    return _per;
}
void person::setPerson(std::string per){
    _per=per;
}
 std::string person::display()const{
    std::stringstream s;
    s<<_per;
    return s.str();
}