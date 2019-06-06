#include "platypus.h"
#include <iostream>
using namespace std;
#include "platypus.h" //checking for header file

int main(){
Platypus p; //to print the dead platypus
p.print();
cout << endl; //for style points

Platypus p1(10.0,10,'a','m'); //first platypus calling the constructor
p1.print(); //print function
p1.age_me(); //age_me function
cout << endl; //style points

Platypus p2(5.0,10,'b','f'); //second platypus calling the constructor
p2.print(); //print function
p2.age_me();
cout << endl; //style points

p1.eat(); //eating function called for platypus 1
p2.eat(); //eating function called for platypus 2
cout << endl; //style points

p1.fight(p2); //fight function against p1 and p2
cout << endl; // style points

Platypus p3; //third platypus without any explicit values
p3.hatch(); //to show that p3 is actually a newborn and baby already has set values
cout << endl; //style points

p1.age_me(); //every single function called to show everything works
p2.age_me();
p1.eat();
p2.eat();
p1.fight(p2);
p2.hatch();

return 0;
}

