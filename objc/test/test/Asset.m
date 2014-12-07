//
//  Asset.m
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import "Asset.h"
@class Employee;
@implementation Asset
@synthesize label, resaleValue;
- (NSString *) description
{
    if([self holder]) {
        return [NSString stringWithFormat:@"<%@ $%d <-- %d",[self label], [self resaleValue],
                [holder employeeID]];
    } else {
        return [NSString stringWithFormat:@"<%@ $%d>",
                [self label], [self resaleValue]];
    }
}

- (void) dealloc
{
    NSLog(@"deallocating %@", self);
}
@end
