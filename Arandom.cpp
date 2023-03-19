#include "Arandom.h"
#include<time.h>

int Arand(int _min, int _max){
    srand(time(NULL));
    return _min + rand()%(_max-_min+1);
}


bool isEmpty(char _str[20]){
    if(_str[0]=='\0'){
        return 1;
    }

return 0;
}
