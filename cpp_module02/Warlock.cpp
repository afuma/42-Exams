#include "Warlock.hpp"

// Constructeur
Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

// Destructeur
Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!" << std::endl;
}

// // Constructeur de copie
// Warlock::Warlock(const Warlock& other): name(other.name), title(other.title) {}

// // Surcharge de l'opérateur d'affectation
// Warlock& Warlock::operator=(const Warlock& other) {
//     if (this != &other) {
//         this->name = other.name;
//         this->title = other.title;
//     }
//     return *this;
// }

// Accesseurs pour name et title
const std::string& Warlock::getName() const { return this->name; }
const std::string& Warlock::getTitle() const { return this->title; }
void Warlock::setTitle(const std::string &title) { this->title = title; }

// Méthode d'introduction
void Warlock::introduce() const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

// Méthode pour apprendre un sort
void Warlock::learnSpell(ASpell *spell) {
    spellBook.learnSpell(spell);  // Appel à SpellBook
}

// Méthode pour oublier un sort
void Warlock::forgetSpell(std::string const &spellName) {
    spellBook.forgetSpell(spellName);  // Appel à SpellBook
}

// Méthode pour lancer un sort
void Warlock::launchSpell(const std::string spellName, const ATarget &target) {
    ASpell *spell = spellBook.createSpell(spellName);  // Appel à SpellBook
    if (spell) {
        spell->launch(target);  // Lancer le sort si trouvé
    }
}
