#include "Vector3.h"

// Functions
Vector3::Vector3()
{
}


Vector3::~Vector3()
{
}

Vector3::Vector3(float X, float Y, float Z) :x(X), y(Y), z(Z) {}

void Vector3::set(float X, float Y, float Z) { x = X; y = Y; z = Z; }

// operator overloading
// this is just scalar multiplication
Vector3 Vector3::operator*(const float scalar) const
{
	Vector3 result;
	result.x = x * scalar;
	result.y = y * scalar;
	result.z = z * scalar;
	return result;
}

// this is the addition operator to add two vectors
Vector3 Vector3::operator+(const Vector3 rhs) const
{
	Vector3 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;

	return result;
}

// scalar devision
Vector3 Vector3::operator/(const float scalar) const
{
	Vector3 result;
	result.x = x / scalar;
	result.y = y / scalar;
	result.z = z / scalar;
	return result;
}

// this is the subtraction operator to add two vectors
Vector3 Vector3::operator-(const Vector3 rhs) const
{
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	return result;
}

// operator overloading for the *= symbol
Vector3 Vector3::operator*=(const float scalar) // const needed to be removed to modify the value of this-> variables.
{
	return *this = *this * scalar; // calls the multiplication function to do the calculation
}

// operator overloading for the += symbol
Vector3 Vector3::operator+=(const Vector3 scalar) // const needed to be removed to modify the value of this-> variables.
{	
	return *this = *this + scalar; // calls the addition function to do the calculation
}

// operator overloading for the /= symbol
Vector3 Vector3::operator/=(const float scalar) // const needed to be removed to modify the value of this-> variables.
{
	return *this = *this / scalar; // calls the divison function to do the calculation
}

// operator overloading for the -= symbol
Vector3 Vector3::operator-=(const Vector3 scalar) // const needed to be removed to modify the value of this-> variables.
{
	return *this = *this - scalar; // calls the subtraction function to do the calculation
}