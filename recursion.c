#include "recursion.h"

int zero_func(int num)

{
    num--;
    if (num != 0){
	zero_func(num);
    }
    else{
	return num;
    }

}
