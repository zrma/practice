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
@synthesize label, resaleValue, holder;
- (NSString *) description
{
    if ([self holder]) {
        return [NSString stringWithFormat:@"<%@: $%d, assigned to %@>",
                [self label], [self resaleValue], [self holder]];
    } else {
        return [NSString stringWithFormat:@"<%@ $%d>",
                [self label], [self resaleValue]];
    }
}
@end
