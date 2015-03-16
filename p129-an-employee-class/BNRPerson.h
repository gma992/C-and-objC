//
//  BNRPerson.h
// 
//
//  Created by Gabriel on 11/03/15.
//  
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject
//{
//
////// declaramos dos instance variables
////    float _heightInMeters;
////    int _weightInKilos;
//    
//    // NO HACE FALTA GENERAR MILLONES DE LINEAS SI LO HAGO A TRAVES DE ==PROPERTIES==
//          ABAJO
//    
//}
// BNRPerson has methods to read and set its instance variables
// BNRPerson has a method that calculates Body Mass Index ESTE SI QUE SE QUEDA IGUAL, COPIADO ABAJO

// BNRPerson has two properties
@property (nonatomic) float heightInMeters;
@property (nonatomic) int weightInKilos;

// BNRPerson has a method that calculates Body Mass Index
- (float)bodyMassIndex;

@end
