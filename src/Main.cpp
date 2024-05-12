#include "Tensor.h"

int main(){
    int shape[] = {1,2,3};
    int size = sizeof(shape)/sizeof(int);
    csty::Tensor tensor(shape, size);
    return 0;
}