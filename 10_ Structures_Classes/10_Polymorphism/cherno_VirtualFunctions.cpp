#include <iostream>
#include "farm.h"

using namespace std;
/* polymorphism, virtual functions, abstract class 
    -virtual function: two performance cost to memory
    */

class Entity {
    public:
        virtual string GetName() { return "Entity"; }   // - virtual
};

class Player : public Entity {
    private:
        string m_Name;
    public:
        Player(const string& name) : m_Name(name) {

        }
        string GetName() override { return m_Name; }    // -override
};

void PrintName(Entity* entity) {
    cout << entity->GetName() << endl;
}

int main () {
    Entity* e = new Entity();
    /* cout << e->GetName() << endl; */
    PrintName(e);

    Player* p = new Player("Brian");
    /* cout << p->GetName() << endl; */
    PrintName(p);

    /* - we are expecting to get "Brian". however we are getting "Entity" */
    // Entity* entity = p;
    // cout << entity-> GetName() << endl;
    return 0;
}



/*
    The issue we are getting is that were are only getting the contents of the Parent class.
    this is because if we just declare our functions or methonds normally inside our classes.
    When it comes time to  call a method, its going to get whatever methods that belongs to 
    that type.
*/
    // -- Original code with ISSUE --

    // class Entity {
    // public:
    //     string GetName() { return "Entity"; }
    // };

    // class Player : public Entity {
    //     private:
    //         string m_Name;
    //     public:
    //         Player(const string& name) : m_Name(name) { }
    //         string GetName() { return m_Name; }
    // };

    // void PrintName(Entity* entity) { cout << entity->GetName() << endl; }

    // int main () {
    //     Entity* e = new Entity();
    //     /* cout << e->GetName() << endl; 
    //     PrintName(e);

    //     Player* p = new Player("Brian");
    //     /* cout << p->GetName() << endl; */
    //     PrintName(p);

    //     /* - we are expecting to get "Brian". however we are getting "Entity" */
    //     // Entity* entity = p;
    //     // cout << entity-> GetName() << endl;
    //     return 0;
    // }
