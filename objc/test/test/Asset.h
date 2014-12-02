//
//  Asset.h
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"
@interface Asset : NSObject
{
    NSString *label;
    Employee *holder;
    unsigned int resaleValue;
}

@property (strong) NSString *label;
@property (strong) Employee *holder;
@property unsigned int resaleValue;
@end
