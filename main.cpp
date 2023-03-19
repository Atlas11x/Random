#include "Arandom.h"
#include <iostream>


int main()
{
    int result_from_int_function_with_name_get_random_value;
//how to use:
    result_from_int_function_with_name_get_random_value = get_random_value(0, 10);
    printf("%d\n", result_from_int_function_with_name_get_random_value);
//    cout << "Hello World!" << endl;

    //char* str1 = "first";      //for struct
    //char str2[20] = "f";


//    isEmpty(&str2[0]);

    /////////////////////////////////////////////////////////////////////////////////////
    //каков будет остаток от деления 45%21  100%50  24%21 и тд
    //////////////////////////////////////////////////////////////////////////////////////

    /* генерируем пять случайных целых чисел из отрезка [80; 100] */
    //A + rand()%(B-A+1)
    //date hw clock //linux

    srand(time(NULL));
    printf("%ld\n", time(NULL));

    printf("%d\n", 80 + rand()%(100 - 80 + 1));
    printf("%d\n", 80 + rand()%(100 - 79));
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);
    printf("%d\n", 80 + rand()%21);


    //20 ... 50
//  printf("%d\n", 20 + rand()%(50-20+1));

    //create new project
    //low  top

    //-80  -100 - experiment
    //80 100
    // int GetRandomValue(80, 100); .h .cpp

   unsigned char progress = 219;   //-128  ... 127
   //0 ... 255

//   cout << progress << endl;

   for(int i =0; i<50; ++i){
       std::cout << progress;

       for(int j =0; j<100000; ++j){

       }
//       cout << progress;
   }


   //3 lines

//#include <unistd.h>

//unsigned int microseconds;
//...
//usleep(microseconds);


//   system("cls");
//   system("color 4");


    return 0;
}
