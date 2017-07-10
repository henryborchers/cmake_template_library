//
// Created by Borchers, Henry Samuel on 7/8/17.
//

#include "mylibrary.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Sanity", "[Sanity]") {
    REQUIRE(true);
}
TEST_CASE("GetHello", "[string]"){
    REQUIRE(get_hello() == "Hello, World!");
}