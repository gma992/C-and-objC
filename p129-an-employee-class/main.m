//
//  main.m
// 
//
//  Created by Gabriel on 11/03/15.
//
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        //Creamos una instance de BNRPerson
        BNRPerson *mikey = [[BNRPerson alloc] init];
        
        //Le damos a la instance variable valores mediante setters (no los vemos en el código ya que estan creados mediante @property, pero podemos acceder mediante dot notation)
        mikey.heightInMeters = 1.8;
        mikey.weightInKilos = 96;
        
        //Log the instance variables using the getters
        float height = mikey.heightInMeters;
        int weight = mikey.weightInKilos;
        NSLog(@"mikey is %.2f meters tall and weighs %d kilos", height, weight);
        
        //Log some values using custom methods
        float bmi = [mikey bodyMassIndex];
        NSLog(@"mikey has a BMI of %.2f", bmi);
    }
    return 0;
}
