namespace csty {
    class Tensor {
    private:
        double * data = 0;
        int order;
        int size;
        int * shape;
        Tensor * innerTensor;

        Tensor(int * shape, int order, double * data);

        
    public:

        Tensor(int * shape, int order); 

        ~Tensor();
        
    };
}

