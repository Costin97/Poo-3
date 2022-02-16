#include "pixel.hpp"

Pixel::Pixel(){
	this->culoare=-1;
}

Pixel::Pixel(int c){
	this->culoare=c;
}

int Pixel::get_Culoare(){
	return this->culoare;
}

Pixel::~Pixel(){
	this->culoare=-1;//useless
}

Pixel& Pixel::operator=(const Pixel& obj){
	this->culoare=obj.culoare;
	return *this;
}

void Pixel::set_Culoare(int c){
	this->culoare=c;
}

