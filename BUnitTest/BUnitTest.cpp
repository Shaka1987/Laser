// BUnitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp> //single-header
//#include "../Laser/..."

BOOST_AUTO_TEST_CASE(my_boost_test)
{

	BOOST_CHECK(1 == 1);
}