#include "platypus.h"
#include <iostream>
using namespace std;
#include "platypus.h" //checking for header file

int main(){
Platypus p;
p.print();
cout << endl;

Platypus p1(10.0,10,'a','m');
p1.print();
p1.age_me();
cout << endl;

Platypus p2(5.0,10,'b','f');
p2.print();
p2.age_me();
cout << endl;

p1.eat();
p2.eat();
cout << endl;

p1.fight(p2);
cout << endl;

Platypus p3;
p3.hatch();
cout << endl;

p1.age_me();
p2.age_me();
p1.eat();
p2.eat();
p1.fight(p2);
p2.hatch();

return 0;
}
