#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>

#include "ejercicios.h"

using namespace std;

int busquedaBinaria ( vector < int > v , int x ){
    //casos triviales
    if (v.size() == 0) {
        return -1;
    }
    else if (v.size() == 1) {
        if (v[0] == x) {
            return 0;
        } else {
            return -1;
        }
    } else if (x < v[0]) {
        return -1;
    } else if (x > v[v.size()-1]){
        return -1;
    } else {
        // casos no triviales
        int low = 0;
        int high = v.size();
        while (low+1 < high){
            int mid = (low+high)/2;
            if (v[mid] <= x){
                low = mid;
            } else {
                high = mid;
            }
        }
        if (v[low] == x) return low;
        else return -1;
    }
}

int busquedaJumpSearch(vector<int> v, int x){
    //casos triviales
    if (v.size() == 0) {
        return -1;
    }
    else if (v.size() == 1) {
        if (v[0] == x) {
            return 0;
        } else {
            return -1;
        }
    } else if (x < v[0]) {
        return -1;
    } else if (x > v[v.size()-1]){
        return -1;
    } else { //no triviales
        float salto = sqrt(v.size());
        int i = 0;
        while (i < v.size() && v[i] < x){
            i += salto;
        }
        int low = i - salto;
        int high = v.size();
        while (low+1 < high){
            int mid = (low+high)/2;
            if (v[mid] <= x){
                low = mid;
            } else {
                high = mid;
            }
        }
        if (v[low] == x) return low;
        else return -1;
    }
}


///indicePico

int indicePico(vector<int> v){
    if (v.empty()) return -1;
    if (v.size() == 1) return 0;
    if (v.size() > 1 && v[0] > v[1]) return 0;
    for (int i = 0; i < v.size() - 1; i++){
        if (v[i] > v[i-1] && v[i] > v[i+1]) return i;
    }
    if (v[v.size()-1]>v[v.size()-2]) return v.size() - 1;
    else return -1;
}

int puntoFijo(vector<int> v) {
    int res = - 1;
    for (int i = 0; i < v.size() && res == -1; i++){
        if (i == v[i]) res = i;
    }
    return res;
}