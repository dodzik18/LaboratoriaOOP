#pragma once
class Figure
{
public:
	Figure(int a_ = 0)
		: a(a_) {};


	virtual double area() = 0; //returns area of the figure
	virtual double circumference() = 0; 
	virtual void show() = 0; //shows area and circumference of the figure


	int a; //variable, that is inherited, by all of figures, it can be one of quadrangle sides.
		   //it's application will be commented in each class.
	virtual int getA() {return a;}; //returns a

};

