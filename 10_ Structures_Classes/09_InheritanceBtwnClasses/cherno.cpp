#include <iostream>

using namespace std;
/* inheritance between classes */

class Entity{
	public:
		float X, Y;

		void Move(float xa, float ya){
			X += xa;
			Y += ya;
			cout << "X: " << X << ", " << "Y: " << Y << endl;
		}
		
};

class Player : public Entity {
	public:
		const char* Name = "brian";

		void PrintName() {
			cout << Name << endl;
		}
};

int main() {
    Player player;
    player.Move(5, 5);
    player.X = 2; 
    cout<< player.X<<endl;
    player.PrintName();


    return 0;
}


