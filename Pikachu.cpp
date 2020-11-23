#include "Pikachu.hpp"
#include <iostream>

Pikachu::Pikachu() {

}

Pikachu::Pikachu(int l_pikachuSpecialAttack) {
    m_pikachuSpecialAttack = l_pikachuSpecialAttack;
}

Pikachu::Pikachu(int l_pikachuSpecialAttack, int l_pikachuSpecialDefence) {
    m_pikachuSpecialAttack = l_pikachuSpecialAttack;
    m_pikachuSpecialDefence = l_pikachuSpecialDefence;

}

Pikachu::~Pikachu() {

}

void Pikachu::setSpecialAttack(int l_pikachuSpecialAttack) {
    m_pikachuSpecialAttack = l_pikachuSpecialAttack;
}

void Pikachu::setSpecialDefence(int l_pikachuSpecialDefence) {
    m_pikachuSpecialDefence = l_pikachuSpecialDefence;
}

void Pikachu::print() {
    std::cout << "Pikachu special attack: " << getSpecialAttack() << std::endl <<  "Pikachu special defence: " << getSpecialDefence() << std::endl;
    }