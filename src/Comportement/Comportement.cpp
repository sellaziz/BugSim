#include "Comportement.h"
#include "../Bestiole.h"

std::array<double, 2> Comportement::calculVitesse( Bestiole &b, std::vector<Bestiole> & list) {
    std::array<double, 2> vitesse{0,0};
    return vitesse;
}

Comportement::Comportement() {
    this->nom="Comportement";
}

Comportement::Comportement(const char *nom) {
    this->nom = nom;
}