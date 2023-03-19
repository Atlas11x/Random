#include "Arandom.h"


int main()
{
    int result_from_int_function_with_name_get_random_value;
//how to use:
    result_from_int_function_with_name_get_random_value = get_random_value(0, 10);
    printf("Result from function with name [get random number] %d\n", result_from_int_function_with_name_get_random_value);

    //char* str1 = "first";      //for struct
    //char str2[20] = "f";


//    isEmpty(&str2[0]);

    return 0;
}
