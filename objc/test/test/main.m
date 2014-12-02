//
//  main.m
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Person *p = [[Person alloc] init];
        [p setHeightInMeters:1.72];
        [p setWeighitInKilos:75];
        
        NSLog(@"MY BMI %f", [p bodyMassIndex]);
    }
    return 0;
}
