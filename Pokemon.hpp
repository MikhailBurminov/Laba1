#pragma once

#include <string>

class Pokemon
{
protected:
    std::string m_pokemonName;
    int m_pokemonHP;
    int m_pokemonAttack;
    int m_pokemonDefence;
    int m_pokemonSpeed;
public:
    Pokemon();
    Pokemon(std::string l_pokemonName);
    Pokemon(std::string l_pokemonName, int l_pokemonHP);
    Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack);
    Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefence);
    Pokemon(std::string l_pokemonName, int l_pokemonHP, int l_pokemonAttack, int l_pokemonDefence, int l_pokemonSpeed);
    ~Pokemon();


    void setPokemonName(std::string l_userName);
    std::string getPokemonName() { return m_pokemonName; };

    void setPokemonHP(int l_pokemonHP);
    int getPokemonHP() { return m_pokemonHP; };

    void setPokemonAttack(int l_pokemonHP);
    int getPokemonAttack() { return m_pokemonAttack; };

    void setPokemonDefence(int l_pokemonDefence);
    int getPokemonDefence() { return m_pokemonDefence; };

    void setPokemonSpeed(int l_pokemonSpeed);
    int getPokemonSpeed() { return m_pokemonSpeed; };

    void print();
};
