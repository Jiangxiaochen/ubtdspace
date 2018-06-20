#include "mycpp.h"

struct Point2d{
	virtual void FUNC(){

	}
	int x,y;
};
struct Vertex : public virtual Point2d{
	Vertex * next;
};
struct Point3d : public virtual Point2d{
	int z;
};
struct Vertex3d : public Vertex, public Point3d{
	float mumble;
};

int main()
{
	Point2d p2d; Vertex vtx; Point3d p3d; Vertex3d vt3d;
	Point2d * ptr = &vt3d;
	ptr->FUNC();
	return 0;
}


