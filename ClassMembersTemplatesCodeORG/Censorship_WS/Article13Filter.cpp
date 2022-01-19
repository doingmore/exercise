#include <iostream>
#include <set>
#include <vector>
#include "Article13Filter.h"


Article13Filter::Article13Filter(std::set<std::string> copyrighted)
{
	m_copyrighted = copyrighted;
}

bool Article13Filter::blockIfCopyrighted(std::string s)
{
	
	for ( std::string m : this->m_copyrighted)
	{
		if (m==s) // m_copyrighted.count(s)
		{
			this->m_blocked.push_back(s);
			return true;
		}
	}
	return false;
}

bool Article13Filter::isCopyrighted(std::string s) // this not necessery
{
	return false;
}

std::vector<std::string> Article13Filter::getBlocked()
{

	return std::vector<std::string>(this->m_blocked);
}

/*
eussr censorship machines
notblocked
eussr
machines
hello
censorship
end
*/