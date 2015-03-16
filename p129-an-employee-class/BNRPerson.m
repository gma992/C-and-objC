//
//  BNRPerson.m
//  
//
//  Created by Gabriel on 11/03/15.
//  
//

#import "BNRPerson.h"

@implementation BNRPerson

// Aqui ya no hace falta todos los getters y setters ya que estoy usando @properties y no implementando todos los métodos uno por uno.

- (float)bodyMassIndex{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end
