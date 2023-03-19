#include "Arandom.h"

int get_random_value(int _low_border, int _top_border){
    srand(time(NULL));
    return _low_border + rand()%(_top_border-_low_border+1);
}


bool isEmpty(char _str[20]){
    if(_str[0]=='\0'){
        return 1;
    }

return 0;
}
