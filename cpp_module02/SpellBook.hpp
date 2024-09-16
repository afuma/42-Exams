#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <map>
#include "ASpell.hpp"  // Inclure le fichier de base des sorts

class SpellBook {
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spellName);
    ASpell* createSpell(const std::string& spellName) const;

private:
    // Désactiver la copie et l'affectation
    SpellBook(const SpellBook& other);
    SpellBook& operator=(const SpellBook& other);

    std::map<std::string, ASpell*> spells;
};

#endif
