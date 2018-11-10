/*
HongJeongMo C++

Chapter 4_7
enumerated type

usually in header file

*/

#include <iostream>


enum WEAPON// custom data type(user-defined data type)
{
	WEAPON_SWORD = 1,
	WEAPON_HAMMER = 2,
	WEAPON_SHOTGUN = -2,
	WEAPON_KNIFE = 3
};


enum Feeling
{
	HAPPY, // 0
	JOY, // 1
	TIRED, // 2
	BLUE // 3
};




int enumerated_types()
{
	using namespace std;

	WEAPON primaryWeapon = WEAPON_SWORD;
	WEAPON secondaryWeapon(WEAPON_KNIFE);
	WEAPON thirdWeapon = WEAPON_SHOTGUN;


	cout << primaryWeapon << endl;
	cout << secondaryWeapon << endl;
	cout << thirdWeapon << endl;



	return 0;
}