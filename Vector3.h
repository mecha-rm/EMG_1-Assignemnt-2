#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(float, float, float);
	// Vector3(float X,float Y, float Z):x(X),y(Y),z(Z) {}
	~Vector3();

	void set(float, float, float);

	Vector3 operator*(const float) const;
	Vector3 operator+(const Vector3) const;
	Vector3 operator/(const float) const;
	Vector3 operator-(const Vector3) const;

	Vector3 operator*=(const float);
	Vector3 operator+=(const Vector3); // const needed to be removed for it to work.
	Vector3 operator/=(const float);
	Vector3 operator-=(const Vector3);

	// Original Functions
	/*
	void set(float X, float Y, float Z) { x = X; y = Y;z = Z; }

	// operator overloading
	// this is just scalar multiplication
	Vector3 operator*(const float scalar) const
	{ 
		Vector3 result;
		result.x = x*scalar;
		result.y = y*scalar;
		result.z = z*scalar;
		return result;
	}

	// this is the addition operator to add two vectors
	Vector3 operator+(const Vector3 rhs) const
	{
		Vector3 result;
		result.x = x + rhs.x;
		result.y = y + rhs.y;
		result.z = z + rhs.z;

		return result;
	}

	// operator overloading for the += symbol
	Vector3 operator+=(const Vector3 scalar) const
	{
		// return this->operator+(scalar);
		// return *this->operator+(scalar);
		// return *this = *this + scalar;

		// Vector3 result;
		// result.x = x + scalar.x;
		// result.y = y + scalar.y;
		// result.z = z + scalar.z;

		// return result;
	}
	*/

	// its a 3D vector, here is the data!
	float x, y, z;

};

