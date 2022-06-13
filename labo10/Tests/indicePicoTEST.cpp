//
// Created by ollinurb on 12/06/22.
//
#include "gtest/gtest.h"
#include "../ejercicios.h"

TEST(indicePicoTest, listaVacia){
    vector<int> v = {};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}


TEST(indicePicoTest, unElemento){
    vector<int> v = {1};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}

TEST(indicePicoTest, picoEnMedio){
    vector<int> v = {1,2,3,2,1};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}


TEST(indicePicoTest, picoalInicio){
    vector<int> v = {5,2,3,2,1};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}

TEST(indicePicoTest, picoalFinal){
    vector<int> v = {5,2,3,2,7};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}


TEST(indicePicoTest, sinPico){
    vector<int> v = {2,2,2,2,2};

    int indice = indicePico(v);

    if (indice == 0 && v.size() == 1) {
        EXPECT_EQ(indicePico(v), 0);
    } else if (indice == 0) {
        EXPECT_LT(v[indice + 1],v[indice]);
    } else if (indice == -1 ){
        EXPECT_EQ(indicePico(v), -1);
    } else if (indice == v.size()-1) {
        EXPECT_LT(v[indice - 1], v[indice]);
    } else if (indice != 0 && indice != v.size() - 1) {
        EXPECT_LT(v[indice+1],v[indice]);
        EXPECT_LT(v[indice-1],v[indice]);
    }
}
