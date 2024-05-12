#include "Tensor.h"

namespace csty {
    Tensor::Tensor(int* shape, int order){
        int size = 1;
        for (int i = 0; i < order; i++){
            size*= shape[i];
        }
        this->data = new double[size];
        for (int i = 0; i < size; i++){
            data[i] = i;
        }
    }

    Tensor::~Tensor(){
        delete data;
    }
}
