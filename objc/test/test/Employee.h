//
//  Employee.h
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import "Person.h"
@class Asset;
@interface Employee : Person
{
    int employeeID;
    NSMutableArray *assets;
}

@property int employeeID;

- (void) addAssetsObject:(Asset *) a;
- (unsigned int) valueOfAssets;
@end
