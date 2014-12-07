//
//  main.m
//  test
//
//  Created by honux on 2014. 12. 2..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"
#import "Asset.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableArray *employees = [[NSMutableArray alloc]init];
        
        //generate 10 emp
        for (int i = 0 ; i < 10; i++) {
            Employee *e = [[Employee alloc] init];
            [e setWeighitInKilos:45 + i];
            [e setHeightInMeters:1.8 - i/10.0];
            [e setEmployeeID:i];
            
            //add e into array
            [employees addObject:e];
        }
        
        NSMutableArray *allAssets = [[NSMutableArray alloc] init];
        
        //generate 10 assets
        for (int i = 0; i < 10; i++) {
            Asset *a = [[Asset alloc] init];
            [a setLabel:[NSString stringWithFormat:@"Laptop %d",i]];
            [a setResaleValue:i * 13];
            
            NSUInteger random_index = random() % [employees count];
            Employee *any = [employees objectAtIndex:random_index];
            [any addAssetsObject:a];
            
            [allAssets addObject:a];
            
        }
        NSLog(@"Emp %@", employees);
        
        NSLog(@"Giving up ownership of one emp");
        [employees removeObjectAtIndex:5];
        NSLog(@"Giving up ownership of all emp");
        employees = nil;
        allAssets = nil;
    }
    sleep(100);
    return 0;
}
