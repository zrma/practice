//
//  Person.m
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize heightInMeters, weighitInKilos;

- (float) bodyMassIndex
{
    float h = [ self heightInMeters];
    return [self weighitInKilos] / (h * h);
}
@end
