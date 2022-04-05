#include <iostream>
#include "doctest.h"


#include "Matrix.hpp"
using namespace zich;

using namespace std;


TEST_CASE("math operators && increasment, decreasment")
{

    vector<double> arr_a = {1, 2, 3, 4};
    vector<double> arr_b = {1, 2, 3, 4};
    vector<double> arr_c = {1, 2, 3, 5, 7, 6};
    vector<double> result = {2, 4, 6, 8};

    Matrix a{arr_a, 2, 2};
    Matrix b{arr_b, 2, 2};
    Matrix c{arr_b, 2, 2};
    Matrix res{result, 2, 2};

    CHECK_EQ((a + b),res);
    CHECK_FALSE((a - b) == res);
    CHECK_NE(-a, a);
    CHECK_NOTHROW(a += 3);
    CHECK_NOTHROW(b -= b);
    CHECK_NE(-a, -b);
    CHECK_NOTHROW(a++);
    CHECK_NOTHROW(b--);
    CHECK_EQ(++a, ++b);
    CHECK_EQ(--a, --b);
    CHECK_THROWS(a-c);
    CHECK_THROWS(a*c);
    CHECK_THROWS(c-b);


}

TEST_CASE("multiplications & compartions operators ")
{
    vector<double> arr_a = {1, 2, 3, 4};
    vector<double> arr_b = {1, 2, 3, 4};
    vector<double> arr_c = {1, 2, 3, 5, 7, 6};
    vector<double> result = {2, 4, 6, 8};

    Matrix a{arr_a, 2, 2};
    Matrix b{arr_b, 2, 2};
    Matrix c{arr_b, 2, 2};
    Matrix res{result, 2, 2};

    CHECK((a * b) == res);
    CHECK((a * a) == res);
    CHECK((a * c) != res);
    CHECK_NE(a * c, c);
    CHECK_NOTHROW(3 * b);
    CHECK_NOTHROW(0.5 * b);
    CHECK_NOTHROW(b*= 3);
    CHECK_NE((a > b), true);
    CHECK_EQ((a <= b), true);
    CHECK_EQ(a < c, true);
    CHECK_NE(3 * a, a);
    CHECK_NE((a*b)<=c, true);
    CHECK_EQ(a<(4*c), true);


}


