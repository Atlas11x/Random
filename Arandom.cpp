#include "Arandom.h"

int get_random_value(int _low_border, int _top_border){
    srand(time(NULL));
    return _low_border + rand()%(_top_border-_low_border+1);
}


bool isEmpty(char *_str, int _size){
    if(_str[0]=='\0'){
        return true;
    }

return false;
}
