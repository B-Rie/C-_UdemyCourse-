#include <iostream>

/* CREATING MY OWN NAMESPACE */

namespace mySpace {	
	class MyNewLine {
		private:
			std::string text;
		public:
			MyNewLine(std::string text = "\n\n\n"){ this->text=text; }
			std::string toString(){
				return text;
			}
	};
	std::ostream& operator<<(std::ostream& out, MyNewLine& o){
		return out << o.toString();
	}
	MyNewLine endl("\n\n\n\n\n\n\n\n");

}

using namespace mySpace;

int main() {
	int a = 50;
	std::cout << "this is text" << endl;
	return 0;
}

////////////////////////////
// - Basic understanding of namespace
/*
namespace A {
	int a = 20;
}

using namespace A;
int main() {
	int a = 50;
	// cout << A::a << endl;	// - without (using namespace A;), OP: 20
	cout << a << endl;			//- using namespace A;	OP: 20
	return 0;
}
*/