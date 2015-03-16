//
//  BNREmployee.m
// 
//
//  Created by Gabriel on 11/03/15.
//
//

#import "BNREmployee.h"

@implementation BNREmployee
// we implement the method declared into BNREmployee.h, 'yearsOfEmployment'
    - (double)yearsOfEmployment {
    // do I have a non-nil hireDate?
    if (self.hireDate){
        NSDate *now = [NSDate date];
        NSTimeInterval secs = [now timeIntervalSinceDate:self.hireDate];
        return secs / 31557600.0; //Seconds per year
    } else {
        return 0;
    }
}

@end
