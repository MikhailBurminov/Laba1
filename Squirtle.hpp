#pragma once
#include "Pokemon.hpp"

class Squirtle : protected Pokemon {
    public:
        Squirtle();

        Squirtle(int l_squirtleSpecialAttack);

        Squirtle(int l_squirtleSpecialAttack, int l_squirtleSpecialDefence);

        ~Squirtle();

        void setSpecialAttack(int l_squirtleSpecialAttack);
        int getSpecialAttack() { return m_squirtleSpecialAttack; };

        void setSpecialDefence(int l_squirtleSpecialDefence);
        int getSpecialDefence() { return m_squirtleSpecialDefence; };

        void print();

    private:
        int m_squirtleSpecialAttack;
        int m_squirtleSpecialDefence;
        
};