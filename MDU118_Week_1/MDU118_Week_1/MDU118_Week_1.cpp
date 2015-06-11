#include "stdafx.h"
#include <iostream>
#include <string>

class Vector3
{
public:
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(float _x, float _y, float _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	~Vector3()
	{
		
	}
private:
	float x, y, z;
};

void Example_PassByValue(Vector3 vector)
{

}

void Example_PassByPointer(Vector3* vecterPtr)
{

}

void Example_PassByReference(Vector3& vectorRef)
{

}

void Example_PassByConstReference(const Vector3& vectorRef)
{

}

struct Vector2
{
	float x, y;
};

union BadlyNamedUnion
{
	float floatValue;
	int intValue;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int intValue = 0xf;
	float floatValue = 1.1f;
	double doubleValue = 1.5;
	std::string stringValue = "test";

	auto autoMagicInt = 5;
	auto autoMagicString = "test string";

	BadlyNamedUnion testUnion;
	testUnion.floatValue = 53;
	std::cout << testUnion.intValue << std::endl;

	Vector3 myVector3 = Vector3(1, 2, 3);

	Example_PassByValue(myVector3);
	Example_PassByPointer(&myVector3);
	Example_PassByReference(myVector3);
	Example_PassByConstReference(myVector3);

	unsigned int hexValue1 = 0xFFFFFFFF;
	int hexValue2 = hexValue1 & 0xFFFF0FFF;
	hexValue2 = hexValue1 & ~(0x0000F000);
	hexValue2 = hexValue1 | 0x0000F000;

	if ((hexValue1 == 0xFFFFFFFF) && (hexValue2 == 0xFFFFFFFF))
	{

	}

	// 8 bit unsigned interger
	// 1   1  1  1  1 1 1 1
	// 128 64 32 16 8 4 2 1

	std::cout << "hello world!" << std::endl;
	return 0;
}