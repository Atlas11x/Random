#include "Arandom.h"


int main()
{
    bool result_from_bool_function_with_name_isEmpty_why_return_true_or_false;
    int result_from_int_function_with_name_get_random_value;
//how to use:
    result_from_int_function_with_name_get_random_value = get_random_value(0, 10);
    printf("Result from function with name [get random number]: %d\n", result_from_int_function_with_name_get_random_value);

    //char* str1 = "first";      //for struct
    char str2[20] = "";


    result_from_bool_function_with_name_isEmpty_why_return_true_or_false = isEmpty(&str2[0], 20);

    printf("result from isEmpty function: %d\n", result_from_bool_function_with_name_isEmpty_why_return_true_or_false);

    return 0;
}
