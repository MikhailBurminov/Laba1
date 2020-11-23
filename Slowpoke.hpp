#pragma once
#include "Pokemon.hpp"

class Slowpoke : protected Pokemon {
    public:
        Slowpoke();

        Slowpoke(int l_slowpokeSpecialAttack);

        Slowpoke(int l_slowpokeSpecialAttack, int l_slowpokeSpecialDefence);

        ~Slowpoke();

        void setSpecialAttack(int l_slowpokeSpecialAttack);
        int getSpecialAttack() { return m_slowpokeSpecialAttack; };

        void setSpecialDefence(int l_slowpokeSpecialDefence);
        int getSpecialDefence() { return m_slowpokeSpecialDefence; };

        void print();

    private:
        int m_slowpokeSpecialAttack;
        int m_slowpokeSpecialDefence;
        
};