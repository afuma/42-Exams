#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
    BrickWall();
    ~BrickWall();

    // Implémente la méthode clone pour renvoyer une nouvelle instance de BrickWall
    virtual ATarget* clone() const;
};

#endif
