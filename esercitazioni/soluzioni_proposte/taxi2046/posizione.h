#ifndef POSIZIONE_H_INCLUDED
#define POSIZIONE_H_INCLUDED
#include <string>

// Posizione nell'area di Manhattan (coordinate)
class Posizione {
public:
    Posizione(int pos_x, int pos_y);
    virtual ~Posizione() {};
    int getX() {return x;};
    int getY() {return y;};
    void setX(int pos_x);
    void setY(int pos_y);
    double distanza(Posizione p);           // distanza lineare
    double distanzaManhattan(Posizione p);  // Manhattan distance
    std::string toString();                 // formato (x;y)
private:
    int x;
    int y;
};

#endif // POSIZIONE_H_INCLUDED
