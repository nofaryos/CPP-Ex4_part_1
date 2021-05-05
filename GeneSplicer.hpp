
#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"

namespace pandemic{

    class GeneSplicer : public Player{
        public:
            std::string geneSplicerRole = "GeneSplicer";
			GeneSplicer(Board board, City city):Player(board, city){};

            void discover_cure(Color  color);
            std::string role();
    };
}