//
// Created by ollinurb on 12/06/22.
//
//
// Created by ollinurb on 10/06/22.
//
#include "gtest/gtest.h"
#include "../ejercicios.h"

TEST(jumpSearchTEST, numeroEnPosicionIntermedia){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29};
    int n = 15;

    EXPECT_EQ(busquedaJumpSearch(v,n), 5);
}

TEST(jumpSearchTEST, numeroNoEstaEnLista){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29};
    int n = 16;

    EXPECT_EQ(busquedaJumpSearch(v,n), -1);
}

TEST(jumpSearchTEST, listaVacia){
    vector<int> v = {};
    int n = 16;

    EXPECT_EQ(busquedaJumpSearch(v,n), -1);
}

TEST(jumpSearchTEST, unSoloElemento){
    vector<int> v = {16};
    int n = 16;

    EXPECT_EQ(busquedaJumpSearch(v,n), 0);
}

TEST(jumpSearchTEST, numeroAlFinal){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29,35};
    int n = 35;

    EXPECT_EQ(busquedaJumpSearch(v,n), v.size()-1);
}

TEST(jumpSearchTEST, numeroAlInicio){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29,35};
    int n = 2;

    EXPECT_EQ(busquedaJumpSearch(v,n), 0);
}
