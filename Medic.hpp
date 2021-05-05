
#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"

namespace pandemic{

    class Medic : public Player{
        public:
            std::string medicRole = "Medic";
			Medic(Board board, City city):Player(board, city){};

            Medic& treat(City city);
            std::string role();
    };
}