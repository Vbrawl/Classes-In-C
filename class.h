#ifndef CLASS_H
#define CLASS_H


typedef struct {
	char* name;
	int age;
} human;



human human_init(char* name, int age);

void human_change_name(human* _this, char* new_name);
void human_change_age(human* _this, int new_age);
void human_greet(human* _this);



#endif
