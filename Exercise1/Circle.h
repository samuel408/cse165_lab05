#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

struct Circle {
    private:// private double variables
    double x=0,y=0;
     double r = 1 ;

    public:
         double area = (3.14159)*(r*r);
    void setX(double X){
        x=X;
    }
    void setY(double Y){
        y=Y;

    }
    void setR(double R){
        r=R;
    }
    

    double getX(){
        return x;

    }

    double getR(){
        
        return r;
    }

    double getY(){
        return y;
    }




    

};



#endif