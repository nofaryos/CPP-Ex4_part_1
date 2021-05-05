#include "Player.hpp"
#include <string>
using namespace std;

namespace pandemic{
			Player& Player :: drive(City city){return *this;}
			Player& Player :: fly_direct(City city){return *this;}
			Player& Player :: fly_charter(City city){return *this;}
			Player& Player :: fly_shuttle(City  city){return *this;}
			void Player :: build(City  city){}
			void Player :: discover_cure(Color color){}
			Player& Player :: treat(City  city){return *this;}
			string Player :: role(){return "a";}
			Player& Player :: take_card(City  city){return *this;}
}
	