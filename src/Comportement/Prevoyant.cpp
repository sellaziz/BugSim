//
// Created by sella on 04/12/2020.
//

#include "Prevoyant.h"
#include "../Bestiole.h"

Prevoyant::Prevoyant() : Comportement("Prevoyant"){}

std::array<double, 2> Prevoyant::calculVitesse(Bestiole &b, std::vector<Bestiole> &list) {
    return Comportement::calculVitesse(b, list);
}
