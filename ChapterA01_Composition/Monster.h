/*
HongJeongMo C++

Chapter A_1 Object Relationship::Composition

*/
#pragma once


#include <string>
#include "Position2D.h"

class Monster
{

private:
	std::string m_name; 
	Position2D m_location; // m_location(Monster's Position2D) is a part of Monster, Composition
	
	//m_location can't be used in other class
	
						   
	//int m_x; // location
	//int m_y;

	
public:
	Monster(const std::string name_in,const Position2D & pos_in)
		:m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D & pos_target)
	{
		m_location.set(pos_target);
		/*m_x = x_target;
		m_y = y_target;*/
	}

	friend std::ostream & operator << (std::ostream & out, const Monster & monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};