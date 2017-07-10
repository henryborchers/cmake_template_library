//
// Created by henry on 7/10/2017.
//
#include <iostream>
#include "sayhello.h"

void say_hello() {
    std::cout << get_hello() << std::endl;
}

std::string get_hello() {
    return "Hello, World!";
}