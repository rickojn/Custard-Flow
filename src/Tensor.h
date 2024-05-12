namespace csty {
    class Tensor {
    private:
        double * data;
        int order;
    public:

        Tensor(int * shape, int order); 

        ~Tensor();
        
    };
}

