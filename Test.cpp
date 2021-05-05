#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;

#include <iostream>
#include <stdexcept>
#include <sstream>

#include "doctest.h"
using namespace std;

TEST_CASE("Board, operator[] function"){
	Board board;  // Initialize an empty board (with 0 disease cubes in any city).
	board[City::Kinshasa] = 3;   
	
	CHECK(board.getDiseases(City::Kinshasa) == 3);
	CHECK(board.getDiseases(City::Kinshasa) != 2);
	
	board[City::Kinshasa] = 2;
	
	CHECK(board.getDiseases(City::Kinshasa) == 2);
}


TEST_CASE("Board class, is_clean function"){
	Board board;  // Initialize an empty board (with 0 disease cubes in any city).
	bool ans = true;
	CHECK(board.is_clean() == ans);
	board[City::Kinshasa] = 3;   
	CHECK(board.is_clean() == !ans);

}


TEST_CASE("OperationsExpert Player"){
	Board board;  // Initialize an empty board (with 0 disease cubes in any city).
	OperationsExpert player {board, City::Atlanta}; 
	
	player.take_card(City::Atlanta).take_card(City::Kinshasa); // two cards: Atlanta and Kinshasa
	
	CHECK(player.role() == "OperationsExpert");
	
	player.build();
	
	CHECK(player.getCards().count(City::Atlanta) == 1);
	
}

TEST_CASE("Player"){
	Board board;

    Player player1(board, City::Algiers );
	FieldDoctor player2{board,City :: Miami};
	Researcher player3{board,City :: Miami};	
	Virologist player4{board,City :: Miami};
	GeneSplicer player5{board, City :: Miami};
	OperationsExpert player6{board,City :: Miami};
	
	player1.take_card(City::Algiers).take_card(City::Madrid).take_card(City :: Paris);
	
	CHECK_NOTHROW(player1.drive(City::Madrid ));
	
	CHECK_THROWS(player1.drive(City::Miami ));
	
	
	CHECK_NOTHROW(player1.drive(City::Paris )); 
	
	//fly_direct
	CHECK_THROWS(player1.fly_direct(City :: Miami));
	
	CHECK_NOTHROW(player1.fly_direct(City::Paris )); 
	
	CHECK_NOTHROW(player1.fly_direct(City::Algiers ));
	
	//fly_charter
	CHECK_THROWS(player1.fly_charter(City :: Miami));
	
	CHECK_NOTHROW(player1.fly_charter(City::Paris ));

	
	CHECK_EQ(player2.role(),"FieldDoctor");
    CHECK_EQ(player3.role(),"Researcher");
    CHECK_EQ(player4.role(),"Virologist");
    CHECK_EQ(player5.role(),"GeneSplicer");
	CHECK_EQ(player6.role(),"OperationsExpert");
	
	
}
	

	
	
	
	
	
	




