#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>

#include "ejercicios.h"
#include "auxiliares.h"

#include "gtest/gtest.h"

using namespace std;




int main(int argc, char **argv) {
    cout <<"Implementando Gtest" << endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
