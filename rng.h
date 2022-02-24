#pragma once
#include <iostream>
#include <vector>
#include <time.h>

std::vector<char> vowels{'a','e','i','o','u'};

std::string random_name(const int size){
	srand(time(NULL));
	std::string retval;
	retval.resize(size);
	for(int i = 0; i < size; i++){
		if(i == 1) retval[i] = vowels[rand()%5];
		else if(i == 2) retval[i] = vowels[rand()%5];
		else if(size > 4 and i == size-2) retval[i] = vowels[rand()%5];
		else retval[i] = char((rand()%25) + 97);	
	}
	retval[0] = toupper(retval[0]);
	return retval;
}
