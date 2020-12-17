#include <iostream>
#include <cstring>

using namespace std;
/* COPY CONSTRUCTOR */

class String {

		char *m_Buffer;
		unsigned int m_Size;
	public:

		String(const char* string){		// - CONSTRUCTOR
			m_Size = strlen(string);
			m_Buffer = new char[m_Size+1];
			memcpy(m_Buffer, string, m_Size);	// - (destination, source, size)
			//strcpy(m_Buffer, string);
			m_Buffer[m_Size] = 0;
			cout << "CONTRUCTOR Invoked" << endl;
		}
		String(const String &other): m_Size(other.m_Size){
			m_Buffer = new char[m_Size + 1];
			memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
			cout << "COPY-CONTRUCTOR Invoked" << endl;
		}

		~String(){ cout << "DESTRUCTOR Invoked" << endl;delete [] m_Buffer; }

		char& operator[](unsigned int index) { return m_Buffer[index]; };
		friend ostream& operator<< (ostream& stream, const String& string);

};

ostream& operator<< (ostream& stream, const String& string){ // - OVERLOADING the '<<' operator
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String &string){
	cout << string << endl;
}

int main() {
	String string = "Cherno";  
	String string2 = string;
	/* This causes a crash because we created two char* for the cpied variabale string2 
		and then attempted to delete a m_buffer again which has already been freed on 
		the first try*/

	string2[2] = 'a';

	// cout << string <<" at address: " << &string << endl;
	// cout << string2 <<" at address: " << &string2 << endl;
	PrintString(string);
	PrintString(string2);

	return 0;
}