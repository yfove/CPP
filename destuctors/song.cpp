#include <iostream>
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist) 
  : title(new_title), artist(new_artist) {}

// add the Song destructor here:
Song::~Song() {
  
  std::cout << "Goodbye, " << title << "\n";
  
}


std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}