
#ifndef OPENAV_AVTK_NUMBER_HXX
#define OPENAV_AVTK_NUMBER_HXX

#include "widget.hxx"

namespace Avtk
{

class Number : public Widget
{
public:
	Number( Avtk::UI* ui, int x, int y, int w, int h, std::string label);
	virtual ~Number() {}

	/// shows a single dash - instead of any value for this number
	void blankValue( int blank );

	virtual void draw( cairo_t* cr );

protected:
	int blank;
};

};

#endif // OPENAV_AVTK_NUMBER_HXX
