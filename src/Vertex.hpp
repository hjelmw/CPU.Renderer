//////////////////////////////////////////////////////////////////
///							Vertex
///
/// A vertex has 3 spatial coordinates and an RGB color value.
///  Later we will add support for texture mapping here I think
///
//////////////////////////////////////////////////////////////////



#pragma once


class Vertex
{
public:
	float x;
	float y;
	float z;

	float r;
	float g;
	float b;

	Vertex(float x, float y, float z, float r, float g, float b);

	// Vertex operations
	//Vertex operator+(const Vertex& rhs);
	//Vertex operator-(const Vertex& rhs);
	//Vertex operator*(const Vertex& rhs);

	//Vertex operator/(const double& rhs);
	//Vertex operator*(const double& rhs);
	//bool operator==(const Vertex& rhs)const;
	//float dotProduct(const Vertex& rhs);
};