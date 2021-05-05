
#pragma once

#include "Player.hpp"


namespace pandemic{

    class FieldDoctor : public Player{
        public:
            std::string fieldDoctorRole = "FieldDoctor";
			FieldDoctor(Board board, City city):Player(board, city){};

            FieldDoctor& treat(City city);
            std::string role();
    };
}