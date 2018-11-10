#include "Something.h"

void Something::setValue(int value)
{
	m_value = value;
}

int Something::getValue() const
{
	return m_value;
}

const std::string & Something::getValue2() const
{
	return m_string;
}

std::string & Something::getValue2()
{
	return m_string;
}
