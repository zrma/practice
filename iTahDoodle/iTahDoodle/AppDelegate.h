//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by naver on 2014. 12. 26..
//  Copyright (c) 2014년 honux.net. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *docPath(void);

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    
    NSMutableArray *tasks;
}

-(void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;


@end

