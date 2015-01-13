#pragma once
class Figure
{
public:
	Figure(int a_ = 0)
		: a(a_) {};


	virtual double area(void) = 0; //returns area of the figure
	virtual double circumference(void) = 0;
	virtual void show(void) = 0; //shows area and circumference of the figure


	int a;  //variable, that is inherited, by all of figures, 
			//it can be for example one of quadrangle sides.
			//it's usage will be commented in each class.

	virtual int getA(void) { return a; };
};

