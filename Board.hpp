#pragma once

#include "Color.hpp"
#include "City.hpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic{
	class Board{
		public:
			std :: map < City, Color> colorsCitizes;
			std :: map <City, int> diseases;
			std :: map <City, bool> researchStations;
			std :: map <City, std::set<City>> neighbors_inCity;
			std :: map <Color, bool> medicane;
			
			Board(){};
			~Board(){};
			int& operator[](City city);

			friend std::ostream& operator<< (std::ostream& os, const Board& b);
			bool is_clean();
			void remove_cures();
			
			//getters
			int getDiseases(City city);
			Color getColor(City city);
			bool getResearchStations(City city);
			bool getMedicane(City city);
			std::set<City> getNeighbors(City city);
			

	
	
	
	};
}
	