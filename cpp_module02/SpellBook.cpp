#include "SpellBook.hpp"
#include <iostream>

// Constructeur
SpellBook::SpellBook() {}

// Destructeur
SpellBook::~SpellBook() {
    // Libérer la mémoire allouée pour chaque sort
    for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it) {
        delete it->second;
    }
    spells.clear();
}

// Apprendre un nouveau sort
void SpellBook::learnSpell(ASpell* spell) {
    if (spell) {
        spells[spell->getName()] = spell->clone();
    }
}

// Oublier un sort
void SpellBook::forgetSpell(const std::string& spellName) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

// Créer un sort basé sur le nom
ASpell* SpellBook::createSpell(const std::string& spellName) const {
    std::map<std::string, ASpell*>::const_iterator it = spells.find(spellName);
    if (it != spells.end()) {
        return it->second->clone();
    }
    return NULL;
}
