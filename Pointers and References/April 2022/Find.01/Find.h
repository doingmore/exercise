#ifndef FIND_H
#define FIND_H

#include "Company.h"
#include <vector>

Company* find(const std::vector<Company*>& companies, const int& searchID)
{
	for (size_t i = 0; i < companies.size(); i++)
	{
		if (companies[i]->getId() == searchID)
		{
			return companies[i];
		}
	}

	return NULL;
}

#endif // !FIND_H