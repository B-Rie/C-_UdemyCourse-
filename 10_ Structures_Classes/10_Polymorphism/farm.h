#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <iostream>

using namespace std;

class Animal{
        protected:
            string voice;
        public:
            Animal();
            ~Animal();
            virtual string getVoice() = 0;  // - Virtual Function
};

class Dog : public Animal{
            string sign;
        public:
            Dog();
            ~Dog();
            string getVoice() override { return voice + " " + sign; }
};

class Cat : public Animal{
            string sign;
        public:
            Cat();
            ~Cat();
            string getVoice() override { return voice  + " " +  sign; }
};

class Cow : public Animal{
            string sign;
        public:
            Cow();
            ~Cow();
            string getVoice() override { return voice  + " " +  sign; }
};

#endif // FARM_H_INCLUDED
