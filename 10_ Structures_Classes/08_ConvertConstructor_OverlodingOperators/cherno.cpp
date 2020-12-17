#include <iostream>
#include "integer.h"

using namespace std;

struct Vector2 {
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const {		// 1st: const ref to avoid copying, and the 2nd: const the fucntion so it doesnt modify this class
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}

};

/*	<<:	- ostream: original operator		
		- ostream& stream: def of class, so ref to existing stream
		- const Vector2 & other	*/
ostream& operator<<(ostream& stream, const Vector2& other) {
	stream << other.x << ", " << other.y;
	return stream;
}


int main() {

	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result2 = position + speed * powerup;

	cout << result2 << endl;

	return 0;
}