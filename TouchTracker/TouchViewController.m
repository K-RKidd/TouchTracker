//
//  TouchViewController.m
//  TouchTracker
//
//  Created by Krystle on 4/10/14.
//  Copyright (c) 2014 Krystle Kidd. All rights reserved.
//

#import "TouchViewController.h"
#import "TouchDrawView.h"
@implementation TouchViewController

-(void) loadView {
    [self setView:[[TouchDrawView alloc]initWithFrame:CGRectZero]];
}

@end
