#include "class.h"
#include <stdio.h>



human human_init(char* name, int age) {

	human _this;

	_this.name = name;
	_this.age = age;

	return _this;
}


void human_change_name(human* _this, char* new_name) {

	_this->name = new_name;

}


void human_change_age(human* _this, int new_age) {

	_this->age = new_age;

}



void human_greet(human* _this) {

	printf("Hello %s: %d", _this->name, _this->age);

}
