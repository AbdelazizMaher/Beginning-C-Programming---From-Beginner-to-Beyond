#include <iostream>

int* apply_all(const int *const arr1,size_t size1,const int *const arr2,size_t size2);
void print(const int*arr,size_t size);
int main()
{
    int ARR1[] {1,2,3,4,5};
    constexpr size_t ARR1size {sizeof(ARR1)/sizeof(int)};

    int ARR2[] {10,20,30};
    constexpr size_t ARR2size {sizeof(ARR2)/sizeof(int)};
    
    std::cout << "Array1: ";
    print(ARR1,ARR1size);

    std::cout << "Array2: ";
    print(ARR2,ARR2size); 

    int *Product = apply_all(ARR1,ARR1size ,ARR2,ARR2size);
    constexpr size_t Productsize {ARR1size * ARR2size};

    std::cout << "Product: ";
    print(Product,Productsize);  

    delete Product;  

    return 0;
}

int* apply_all(const int *const arr1,size_t size1,const int *const arr2,size_t size2)
{
    int* MulARR {nullptr};
    MulARR = new int[size1 * size2];

    int position {0};
    for( size_t multiplicand = 0 ; multiplicand < size2 ; multiplicand++ )
    {
        for( size_t multiplier = 0 ; multiplier < size1 ; multiplier++ )
        {
            MulARR[position] = arr2[multiplicand] * arr1[multiplier];
            position++;
        }
    }
    return MulARR;
}

void print(const int*arr,size_t size)
{
    std::cout << "[ " ;
    for( size_t i = 0 ; i < size ; i++ )
        std::cout << arr[i] << " ";
    std::cout << "]" << std::endl;
}

