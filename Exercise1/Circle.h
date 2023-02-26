#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

struct Circle {
       double area=3.14159;

    private:
    double x,y,r ;// private double variables

    public:
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
        if (r==0){
            return 1;
        }
        return r;
    }

    double getY(){
        return y;
    }



    

};



#endif