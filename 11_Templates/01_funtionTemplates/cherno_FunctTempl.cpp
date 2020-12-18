#include <iostream>
#include <string>

using namespace std;
/* FUNCTION TEMPLATES
    -   Why create a teplate? Lets say I want to create a function that will largley 
        going to be the same or take in different types  .
    -   Also,twmplatesdo really exist until we call the template function.

*/

// -- Function Template --
template<typename T>    //creating the function template

void Print(T value) {
    cout << value << endl;
}

// ///////////////////////////////
// // - HERE we are defining three different 
// //   OVERLOADs for thre different Print()s.
//
// void Print(int value) {
//     cout << value << endl;
// }

// void Print(float value) {
//     cout << value << endl;
// }

// void Print(string value) {
//     cout << value << endl;
// }
// //////////////////////////////

int main() {

    // - implicitly
    Print(5);
    Print("Hello");
    Print(5.5);

    // - or -
    // - explicitly
    Print<int>(4);
    Print<string>("YO");
    Print<float>(23.231);

    return 0;
}
