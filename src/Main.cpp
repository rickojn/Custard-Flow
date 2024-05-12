#include "Tensor.h"

int main(){
    int shape[] = {1,2,3};
    int order = sizeof(shape)/sizeof(int);
    csty::Tensor tensor(shape, order);
    return 0;
}