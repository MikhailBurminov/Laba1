#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon() {

}

Pokemon::Pokemon(std::string l_pokemonName) {
    m_pokemonName = l_pokemonName;
}

Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
}

Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;

}

Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefence) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;
    m_pokemonDefence = l_pokemonDefence;
}

Pokemon::Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefence, int l_pokemonSpeed) {
    m_pokemonName = l_pokemonName;
    m_pokemonHP = l_pokemonHP;
    m_pokemonAttack = l_pokemonAttack;
    m_pokemonDefence = l_pokemonDefence;
    m_pokemonSpeed = l_pokemonSpeed;
}

Pokemon::~Pokemon() {
    
}

void Pokemon::setPokemonName(std::string l_pokemonName) {
    m_pokemonName = l_pokemonName;
}

void Pokemon::setPokemonHP(int l_pokemonHP) {
    m_pokemonHP= l_pokemonHP;
}

void Pokemon::setPokemonAttack(int l_pokemonAttack) {
    m_pokemonAttack = l_pokemonAttack;
}

void Pokemon::setPokemonDefence(int l_pokemonDefence) {
    m_pokemonDefence = l_pokemonDefence;
}

void Pokemon::setPokemonSpeed(int l_pokemonSpeed) {
    m_pokemonSpeed= l_pokemonSpeed;
}

void Pokemon::print() {
    std::cout << "Pokemon name: " << getPokemonName() << std::endl <<  "Pokemon HP: " << getPokemonHP() << std::endl << "Pokemon attack: " << getPokemonAttack() << std::endl << "Pokemon Defence: " << getPokemonDefence() << std::endl << "Pokemon Speed: " << getPokemonSpeed() << std::endl; 
}