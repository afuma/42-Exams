#include "TargetGenerator.hpp"

// Constructeur
TargetGenerator::TargetGenerator() {}

// Destructeur
TargetGenerator::~TargetGenerator() {
    // Libère la mémoire des cibles enregistrées
    for (std::map<std::string, ATarget*>::iterator it = targets.begin(); it != targets.end(); ++it) {
        delete it->second;
    }
    targets.clear();
}

// Apprend un type de cible
void TargetGenerator::learnTargetType(ATarget *target) {
    if (target && targets.find(target->getType()) == targets.end()) {
        // On copie la cible en appelant son clone()
        targets[target->getType()] = target->clone();
    }
}

// Oublie un type de cible
void TargetGenerator::forgetTargetType(std::string const &type) {
    std::map<std::string, ATarget*>::iterator it = targets.find(type);
    if (it != targets.end()) {
        delete it->second;
        targets.erase(it);
    }
}

// Crée une cible à partir d'un type
ATarget* TargetGenerator::createTarget(std::string const &type) {
    std::map<std::string, ATarget*>::iterator it = targets.find(type);
    if (it != targets.end()) {
        return it->second->clone();
    }
    return NULL;
}
