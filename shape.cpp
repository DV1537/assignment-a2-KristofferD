#include "SHAPE_H"

Shape(){
};
virtual ~Shape(){};

virtual string getType() = 0;
string area();
float circumference();
float position();
bool isConvex();
float distance(Shape s);
