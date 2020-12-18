#include <iostream>
#include <string>

using namespace std;
/* CLASS TEMPLATES
    -   
*/

/* ex:  We want to have an array that has some kind of size that is 
        compiled at compile time. Now we cant just put in a variable
        because this is a stack allocated array, it actually has to be
        known at compile time. 
        So the size value has to be known at compile time.
        Now templates are compiled at compile time so this helps. if
        we make the template int N as the value size
*/

// template<int N> // - defining value
// - we can also
template<typename T, int N> // - define datatype and value
class Array {
private: 
    // int m_Array[N];
    T m_Array[N];
public:
    int GetSie() const { return N; }
};

/*ex: conti...
    - SO this is the code version that was created in main follwing the template.

    class Array {
    private: 
        int m_Array[5];
    public:
        int GetSie() const { return N; }
    };

*/


int main() {

    // Array<5> array;
    Array< int, 5> array;
    cout << array.GetSie() << endl;

    return 0;
}
