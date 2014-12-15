//
//  main.m
//  callback
//
//  Created by honux on 2014. 12. 15..
//  Copyright (c) 2014년 honux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Logger.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Logger *logger = [[Logger alloc] init];
        __unused NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:2.0
                                                          target:logger
                                                        selector:@selector(sayOuch:)
                                                        userInfo:nil
                                                         repeats: YES];
        
                          [[NSRunLoop currentRunLoop] run];

    }
    return 0;
}
