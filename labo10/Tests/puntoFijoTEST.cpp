//
// Created by ollinurb on 12/06/22.
//
#include "gtest/gtest.h"
#include "../ejercicios.h"

TEST(puntoFijoTEST,puntoAlInicio){
    vector<int> v = {0,2,4,6,8,10};

    int indice = puntoFijo(v);

    if (indice == -1) {
        for (int i = 0; i < v.size(); i++){
            EXPECT_NE(v[i], i);
        }
    } else if (indice != -1) {
        EXPECT_EQ(v[indice], indice);
        for (int i = 0; i < indice; i++){
            EXPECT_NE(v[i], i);
        }
    }
}

TEST(puntoFijoTEST,puntoAlFinal){
    vector<int> v = {-5,-2,3};

    int indice = puntoFijo(v);

    if (indice == -1) {
        for (int i = 0; i < v.size(); i++){
            EXPECT_NE(v[i], i);
        }
    } else if (indice != -1) {
        EXPECT_EQ(v[indice], indice);
        for (int i = 0; i < indice; i++){
            EXPECT_NE(v[i], i);
        }
    }
}

TEST(puntoFijoTEST,listaVacia){
    vector<int> v = {};

    int indice = puntoFijo(v);

    if (indice == -1) {
        for (int i = 0; i < v.size(); i++){
            EXPECT_NE(v[i], i);
        }
    } else if (indice != -1) {
        EXPECT_EQ(v[indice], indice);
        for (int i = 0; i < indice; i++){
            EXPECT_NE(v[i], i);
        }
    }
}