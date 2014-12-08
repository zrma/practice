//
//  Employee.m
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import "Employee.h"
#import "asset.h"

@implementation Employee
@synthesize employeeID;

- (void) addAssetsObject:(Asset *)a
{
    if (!assets) {
        assets = [[NSMutableArray alloc] init];
    }
    [assets addObject:a];
    [a setHolder:self];
}
        
- (unsigned int) valueOfAssets
{
    unsigned int sum = 0;
    for (Asset *a in assets) {
        sum += [a resaleValue];
    }
    return sum;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"eid: %d, items: %lu, price: %d",[self employeeID],
            [assets count], [self valueOfAssets]];
}

- (void) dealloc
{
    NSLog(@"deallocating %@", self);
}
@end
