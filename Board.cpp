#include "Board.hpp"
using namespace std;
namespace pandemic{
	
		int& Board::operator[](City city){
			return this -> diseases[city];
		}
		bool Board ::is_clean(){return false;};
		void Board ::remove_cures(){};
		ostream& operator<< (std::ostream& os, const Board& b){return os;};
		
		int Board ::getDiseases(City city){return 5;};
		Color Board ::getColor(City city){
			return Color::Black;
		
			}
		bool Board ::getResearchStations(City city){return false;};
		bool Board ::getMedicane(City city){return false;};
		set<City> Board ::getNeighbors(City city){
			return this->neighbors_inCity[city];};
			
	
}
		
		