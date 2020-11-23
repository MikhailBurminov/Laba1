#pragma once
#include "Pokemon.hpp"

class Pikachu : protected Pokemon {
    public:
        Pikachu();

        Pikachu(int l_pikachuSpecialAttack);

        Pikachu(int l_pikachuSpecialAttack, int l_pikachuSpecialDefence);

        ~Pikachu();

        void setSpecialAttack(int l_pikachuSpecialAttack);
        int getSpecialAttack() { return m_pikachuSpecialAttack; };

        void setSpecialDefence(int l_pikachuSpecialDefence);
        int getSpecialDefence() { return m_pikachuSpecialDefence; };

        void print();

    private:
        int m_pikachuSpecialAttack;
        int m_pikachuSpecialDefence;
        
};