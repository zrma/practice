//
//  Person.h
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    float heightInMeters;
    int weightInKilos;
}

@property float heightInMeters;
@property int weighitInKilos;

-(float) bodyMassIndex;

@end
