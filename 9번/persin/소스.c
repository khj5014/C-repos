#include <stdio.h>
#define max 5

int insult(int n[], int loc, int value) {
    int temp; // 임시저장값
    
    temp = n[loc - 1];
    n[loc - 1] = value;
    
    for (int i=0; i <= max; i++)
    {
        n[i + 1] = n[i];
        n[i] = temp;
    }
    return n;
}