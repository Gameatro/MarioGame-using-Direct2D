#pragma once
#include "SpriteSheet.h"
#include "Graphics.h"
#include<utility>
class Ground
{
protected:
	SpriteSheet* sprite;
	Graphics* gfx;
	D2D1_RECT_F mesh;
	ID2D1RectangleGeometry* boundary;
	bool movingUp;
	int moveUpFrames;

public:
	void Init(float x, float y, float height, float width,const wchar_t* filename, int fx, int fy);
	Ground(Graphics* gfx);
	~Ground();

	//void Display(float x, float y,float width,float height);
	virtual void Display();
	D2D1_RECT_F GetMesh() { return mesh; }

	bool DetectCollision(D2D1_RECT_F other);
	void MoveUp();
};

