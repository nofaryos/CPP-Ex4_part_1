
#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"

namespace pandemic{

    class OperationsExpert : public Player{
        public:
			OperationsExpert(Board borad, City city):Player( borad,  city){
				
			};
            std::string expertRole = "OperationsExpert";
            void build();
            std::string role();
    };
}