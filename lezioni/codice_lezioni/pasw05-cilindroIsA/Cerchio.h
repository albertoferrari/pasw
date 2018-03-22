#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio
{
    public:
        Cerchio(double =1, int = 0, int =0 );
        double getRaggio() { return raggio; }
        void setRaggio(double val) { raggio = val; }
        int getX() { return x; }
        void setX(int val) { x = val; }
        int getY() { return y; }
        void setY(int val) { y = val; }
        double circonferenza();
        double area();
    private:
        double raggio;
        int x;
        int y;
};

#endif // CERCHIO_H
