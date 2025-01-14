// Underground.cpp: implementation of the Underground class 
//////////////////////////////////////////////////////////////////////

#include "Underground.h"

//////////////////////////////////////////////////////////////////////

Underground::Underground() :MAXHOLES(3), holes_{ Hole(4, 3), Hole(15, 10), Hole(7, 15) }
{}

char Underground::get_Hole_Symbol() const
{
	return HOLE;
}
int Underground::get_Holes_Size() const
{
	return static_cast<int>(holes_.size());
}
int Underground::find_hole_number_at_position(const int x, const int y) {
	for (int h_no(0); h_no < get_Holes_Size(); ++h_no)
		if (holes_.at(h_no).is_at_position(x,y))
			return h_no;		//number of the hole
	return -1;				//not a hole
}
int Underground::get_Hole_x(const int holeNum) const 
{
	return holes_.at(holeNum).get_x();
}
int Underground::get_Hole_y(const int holeNum) const
{
	return holes_.at(holeNum).get_y();
}