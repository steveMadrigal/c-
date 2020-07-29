#include <iostream>
#include "cmake-build-debug/person.h"

int main() {
person * _p=new person("steve");
std::cout<<_p->display()<<"\n";
_p->setPerson("Esteban");
std::cout<<_p->display()<<"\n";
}
