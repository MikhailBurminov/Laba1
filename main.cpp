#include <iostream>
#include <fstream>
#include "Pikachu.hpp"
#include "Squirtle.hpp"
#include "Slowpoke.hpp"

void printStart(){
    std::ofstream myfile ("example.txt");
    if (myfile.is_open()){
        myfile << "<pokemons>\n";
        myfile.close();
    }else std::cout << "Unable to open file";
}

void printEnd(){
    std::ofstream myfile ("example.txt", std::ios::app);
    if (myfile.is_open()){
        myfile << "</pokemons>";
        myfile.close();
    }else std::cout << "Unable to open file";
}

void print(Pokemon &name){
    std::ofstream myfile ("example.txt", std::ios::app);
    if (myfile.is_open()){
        myfile << "\t<pokemon name=\"" << name.getPokemonName() << "\">\n\t\t";
        myfile << "<hp>" << name.getPokemonHP() << "</hp>\n\t\t";
        myfile << "<attack>" << name.getPokemonAttack() << "</attack>\n\t\t";
        myfile << "<defence>" << name.getPokemonDefence() << "</defence>\n\t\t";
        myfile << "<speed>" << name.getPokemonSpeed() << "</speed>\n";
        myfile.close();
    }else std::cout << "Unable to open file";
}

int main() {

    Pokemon Slowpoke("Slowpoke", 20, 20, 20, 20);
    Pokemon Pikachu("Pikachu", 40, 20, 40, 20);
    Pokemon Squirtle("Squirtle", 30, 30, 30, 30);


    printStart();
    print(Slowpoke);
    print(Pikachu);
    print(Squirtle);
    printEnd();

    return 0;
}