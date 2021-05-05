
#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Color.hpp"

namespace pandemic{

    class Dispatcher : public Player{
        public:
            std::string dispatcherRole = "Dispatcher";
			Dispatcher(Board borad, City city):Player( borad,  city){};
            Dispatcher& fly_direct(City city);
            std::string role();
    };
}