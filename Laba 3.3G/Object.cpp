#include "Object.h"

Object::Object() {
    count++;
}

Object::~Object() {
    count--;
}

int Object::getCount() {
    return count;
}

int Object::count = 0;
