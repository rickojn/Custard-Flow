#include "Tensor.h"

namespace csty {


    Tensor::Tensor(int* shape, int order){
        this->order = order;
        int size = 1;
        for (int i = 0; i < order; i++){
            size*= shape[i];
        }
        this->data = new double[size];
        for (int i = 0; i < size; i++){
            data[i] = i;
        }

        innerTensor = new Tensor(shape, order-1, data);
    }

    Tensor::Tensor(int * shape, int order, double * data){
        this->data = data;
        this->order = order;
        if (order > 1){
            innerTensor = new Tensor(shape, order-1, data );
        }
        else {
            innerTensor = nullptr;
        }
    }

    Tensor::~Tensor(){
        delete data;
    }
}
