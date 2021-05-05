
#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"

namespace pandemic{

    class Virologist : public Player{
        public:
            std::string virologistRole = "Virologist";
			Virologist(Board board, City city):Player(board, city){};

            Virologist& treat(City city);
            std::string role();
    };
}