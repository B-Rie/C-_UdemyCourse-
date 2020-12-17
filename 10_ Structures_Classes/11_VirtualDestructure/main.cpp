#include <iostream>
#include "farm.h"

using namespace std;
/* polymorphism, virtual functions, abstract class */
void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
int main(){

/*
    Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;
    
    voiceOfAnimal(&cow);
*/

    /* -    In a class that will be used to inhereit from, we would have to make 
            its destructors virtual. */
    Animal *dog = new Dog;

    delete dog;

    return 0;
}

void voiceOfAnimal(Animal *p){
    cout << p->getVoice() << endl;
}

void voiceOfAnimal(Animal &p){
    cout << p.getVoice() << endl;
}
