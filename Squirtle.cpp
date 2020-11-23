#include "Squirtle.hpp"
#include <iostream>

Squirtle::Squirtle() {

}

Squirtle::Squirtle(int l_squirtleSpecialAttack) {
    m_squirtleSpecialAttack = l_squirtleSpecialAttack;
}

Squirtle::Squirtle(int l_squirtleSpecialAttack, int l_squirtleSpecialDefence) {
    m_squirtleSpecialAttack = l_squirtleSpecialAttack;
    m_squirtleSpecialDefence = l_squirtleSpecialDefence;

}

Squirtle::~Squirtle() {

}

void Squirtle::setSpecialAttack(int l_squirtleSpecialAttack) {
    m_squirtleSpecialAttack = l_squirtleSpecialAttack;
}

void Squirtle::setSpecialDefence(int l_squirtleSpecialDefence) {
    m_squirtleSpecialDefence = l_squirtleSpecialDefence;
}

void Squirtle::print() {
    std::cout << "Squirtle special attack: " << getSpecialAttack() << std::endl <<  "Squirtle special defence: " << getSpecialDefence() << std::endl;
    }