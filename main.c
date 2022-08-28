#include "class.h"
#include <stdio.h>


int main() {

	human h1 = human_init("Vbrawl", 25);
	human h2 = human_init("Vbrawl2", 26);

	human_change_name(&h1, "Nick");

	human_change_age(&h1, 30);



	human_greet(&h1);
	human_greet(&h2);


}
