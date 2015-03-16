//
//  BNREmployee.h
//  
//
//  Created by Gabriel on 11/03/15.
//  
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"

@interface BNREmployee : BNRPerson //NSObject we changed the superclass to BNRPerson

@property (nonatomic) unsigned int employeeId;
@property (nonatomic) unsigned int officeAlarmCode;
@property (nonatomic) NSDate *hireDate; //Aquí estamos apuntando a otro objeto, así que habrá implicaciones de memoria que habrá que tratar más adelante

- (double)yearsOfEmployment;

@end
