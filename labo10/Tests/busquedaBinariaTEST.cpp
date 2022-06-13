//
// Created by ollinurb on 10/06/22.
//
#include "gtest/gtest.h"
#include "../ejercicios.h"

TEST(busquedaBinariaTest, numeroEnPosicionIntermedia){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29};
    int n = 15;

    EXPECT_EQ(busquedaBinaria(v,n), 5);
}

TEST(busquedaBinariaTest, numeroNoEstaEnLista){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29};
    int n = 16;

    EXPECT_EQ(busquedaBinaria(v,n), -1);
}

TEST(busquedaBinariaTest, listaVacia){
    vector<int> v = {};
    int n = 16;

    EXPECT_EQ(busquedaBinaria(v,n), -1);
}

TEST(busquedaBinariaTest, unSoloElemento){
    vector<int> v = {16};
    int n = 16;

    EXPECT_EQ(busquedaBinaria(v,n), 0);
}

TEST(busquedaBinariaTest, numeroAlFinal){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29,35};
    int n = 35;

    EXPECT_EQ(busquedaBinaria(v,n), v.size()-1);
}

TEST(busquedaBinariaTest, numeroAlInicio){
    vector<int> v = {2,5,8,9,10,15,17,20,25,29,35};
    int n = 2;

    EXPECT_EQ(busquedaBinaria(v,n), 0);
}
