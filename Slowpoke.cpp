#include "Slowpoke.hpp"
#include <iostream>

Slowpoke::Slowpoke() {

}

Slowpoke::Slowpoke(int l_slowpokeSpecialAttack) {
    m_slowpokeSpecialAttack = l_slowpokeSpecialAttack;
}

Slowpoke::Slowpoke(int l_slowpokeSpecialAttack, int l_slowpokeSpecialDefence) {
    m_slowpokeSpecialAttack = l_slowpokeSpecialAttack;
    m_slowpokeSpecialDefence = l_slowpokeSpecialDefence;

}

Slowpoke::~Slowpoke() {

}

void Slowpoke::setSpecialAttack(int l_slowpokeSpecialAttack) {
    m_slowpokeSpecialAttack = l_slowpokeSpecialAttack;
}

void Slowpoke::setSpecialDefence(int l_slowpokeSpecialDefence) {
    m_slowpokeSpecialDefence = l_slowpokeSpecialDefence;
}

void Slowpoke::print() {
    std::cout << "Slowpoke special attack: " << getSpecialAttack() << std::endl <<  "Slowpoke special defence: " << getSpecialDefence() << std::endl;
    }