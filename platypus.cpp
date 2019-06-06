#include "platypus.h"
#include <string>
#include <time.h>
using namespace std;

#include "platypus.h" //include header file twice to make sure header file got copied over correctly


Platypus::Platypus() //o	a default constructor that creates a dead platypus
:alive(0) {} //its false that Platy is alive


Platypus::Platypus(float initWeight, short int initAge, char initName, char initGender){
//a constructor that you can pass values to so as to establish its gender, weight, age, and name; it will default to alive and not mutant.
    weight = initWeight; //bringing in the data members
    age = initAge; //
    name = initName; //bringing in data members
    gender = initGender;
    alive = 1; //platyus is currently alive
    mutant = 0; //platypus is not a mutant

}

Platypus::~Platypus(){ //definition of destructor
}

void Platypus::print(){ //	a print function that will output to the screen the attributes of that platypus in a nice, easy to read format.
cout << "Platy Name is " << name << endl;
cout << "Platy Weight is " << weight << endl;
cout << "Platy Age is " << age << endl;
cout << "Platy Gender is " << gender << endl;
if(alive) { //if alive is true
    cout << "Platy is alive" << endl;
}
else { //if alive is false
    cout << "Platy is dead" << endl;
}
if(mutant) { //if mutant is true
    cout <<"Platy is a mutant" << endl;
}
else { //if mutant is false
    cout << "Platy is not mutant" << endl;
}
cout << endl; //for my sanity when looking at output
}

void Platypus::age_me(){ /*an age_me function that returns nothing but increments the object's age. It will also include a
2% chance that the object will become a mutant. Further, the platypus has a chance of becoming dead each time it ages. This chance is ten times
the platypus' weight. A 5 pound platypus has a 50% chance of death. A 10 pound platypus (or heavier) has a 100% chance of death. */
    if(alive){ //if platy is still alive, it will make platy age by 1 and tell platy chance of dying
        age++; //increments age by 1
        float chanceOfDeath = (weight * 10); // chance of dying as platy ages
        cout << name << " has " << chanceOfDeath << "% chance of dying" << endl;
    }
}


void Platypus::fight(Platypus& opponent){ /*a fight function that accepts another platypus object as a parameter. It will have the calling
platypus attack the other (passed in) platypus. The survivor is based on a "fight ratio": it is calculated as
(calling_platypus_weight/other_platypus_weight) * 50. A random value from 1 to 100 is obtained. If it is less than the fight ratio,
the calling platypus survives; otherwise the other platypus survives. */
    cout << "But it's Okay because its time...." << endl;
    cout << "For the battle we've all been waiting for..." << endl;
    cout << "Platy vs Opponent so they can lose weight!!!" << endl;

    int fight_ratio = (weight/opponent.weight)*50; //the "fight ratio"
    int Randnum = rand()%100; //random number from 1 to 100

        if(Randnum < fight_ratio){ //if random number is less than fight ratio
            alive = 1;
            opponent.alive = 0;
            cout << "Congrats! Platy won!" << endl;
        }
        else { //if fight ratio is bigger
            alive = 0;
            opponent.alive = 1;
            cout << "Congrats! Opponent won!" << endl;
        }
}

void Platypus::eat() {/*an eat function that increases the weight of the platypus by a random amount from 0.1% to 5.0% of the platypus' current
weight. */
    if(alive) { //if platy is still alive
        weight = weight + (float)(rand()%5)*0.01; //platy current weight plus a random number from 0.01 to 0.05
        cout << "Platy ate a lot and gained weight... She's now " << weight << endl;
    }
}

void Platypus::hatch() { /*A hatch function that will randomly set up a newborn platypus with alive=true, mutant=false, and age=0. Gender will
randomly be 'm' or 'f' with equal probability. Weight will randomly be between 0.1 and 1.0 pounds. Name will be assigned by the user
depending on the gender OR name could just be a character chosen randomly*/
    alive = true;
    mutant = false;
    age = 0;

    srand(time(NULL));
    char baby = 'a' + rand() % 26;
    cout << "Baby Platy's name is " << baby << endl;

    weight = (float)(rand() % 10)*0.1; //https://www.daniweb.com/programming/software-development/threads/340575/how-to-generate-decimal-random-numbers-between-0-and-1
    cout << "weight: " << weight << endl;

    int randNum = rand()%2;
    if (randNum == 1) {
        gender = 'm';
        cout << "Baby is male" << endl;
    }
    else {
        gender = 'f';
        cout << "Baby is female" << endl;
    }

    cout << "Baby Age is 0" << endl;
    cout << "Baby is Alive" << endl;
    cout << "Baby is not mutant" << endl;
}

