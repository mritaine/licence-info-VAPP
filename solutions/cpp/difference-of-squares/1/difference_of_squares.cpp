#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int N){
        int total = 0;
        int i = 0;
        while (i <= N) {
            total = total + i ;
            i += 1 ;
        }
        return total * total;
    }
    int sum_of_squares(int N){
        int total = 0;
        int i = 0;
        while (i <= N){
            total = total + (i*i);
                i += 1;
        }
        return total;
    }
    int difference (int N){
        return square_of_sum(N) - sum_of_squares(N);
    }
}