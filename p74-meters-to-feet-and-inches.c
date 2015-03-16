//
//  main.c
//  
//
//  Created by Gabriel on 09/03/15.
//  
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr){

    double rawFeet = meters * 3.281;
    //instead of using the following commented line, challenge to use modf()
    unsigned int feet = (unsigned int)floor(rawFeet);
    
    //Store the number of feet at the supplied address
    if(ftPtr){
        printf("Storing %u to the address %p\n", feet, ftPtr);
        *ftPtr = feet;
    }
    
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
    if(inPtr){
        printf("Storing %.2f to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }
    
    //challenge - modf()
    double integerPart;
    double fractionPart;
    fractionPart = modf(rawFeet, &integerPart);
    //find the value stored into integerPart
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
}

int main(int argc, const char * argv[]) {

    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    //full part
    
    //integer part
    
    //float part
    return 0;
}
