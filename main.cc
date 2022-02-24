#include <iostream>
#include "rng.h"
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int size = (rand() % 6) + 2;
	string s = random_name(size);
	cout << s << endl;
}

