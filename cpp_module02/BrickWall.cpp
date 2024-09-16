#include "BrickWall.hpp"

// Constructeur par défaut, initialisant le type "Inconspicuous Red-brick Wall"
BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

// Destructeur
BrickWall::~BrickWall() {}

// Implémente la méthode clone, renvoyant une nouvelle instance de BrickWall
ATarget* BrickWall::clone() const {
    return new BrickWall();
}
