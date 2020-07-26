//////////////////////////////////////////////////////////////////
///							PixelData
///
/// Stores the per pixel computed data. 
///	 It is later passed to a pixel shader 
///
//////////////////////////////////////////////////////////////////


#pragma once

#include "TriangleEquations.hpp"

class PixelData
{
public:
	float r;
	float g;
	float b;

	void init(const TriangleEquations &eqn, float x, float y);
	void stepX(const TriangleEquations &eqn);
	void stepY(const TriangleEquations& eqn);
};