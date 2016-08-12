/*
 The purpose of this program is to demostrate the abstract class
*/

#include <iostream>
#include <vector>
#include <functional>
//abstract base class
class shape{
   public:
     virtual void draw()=0;
};


//concrete class
class circle:public shape{
   float radius;
   int x,y;
   public:
	circle(int x, int y,float radius) {
 	  this->x=x;
	  this->y=y;
	  this->radius = radius;		
	}  
 	virtual void draw() {
		std::cout<<"\n Drwaing a circle......completed";
	}
};

class triangle:public shape{
    int side1,side2,side3;
    public:
      triangle(int side1,int side2, int side3){
         this->side1=side1;
         this->side2=side2;
         this->side3=side3;
      }
      virtual void draw() {
         if ((side1==side2) && (side1==side3))
	   std::cout<<"\n Hey...you are drawing a equilateral triangle";
         else {
           std::cout<<"\n Drawing a triangle.....completed";
	 }
      }
};

int main() {
  shape *shapePtr = new circle(2,7,11);
  shapePtr->draw();
  std::vector<shape*> my_scene;
my_scene.push_back(new circle(40, 30, 10));
my_scene.push_back(new triangle(10, 50, 15));
std::for_each(my_scene.begin(), my_scene.end(), std::mem_fun(&shape::draw));

}



