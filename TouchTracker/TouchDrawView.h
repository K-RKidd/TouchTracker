//
//  TouchDrawView.h
//  TouchTracker
//
//  Created by Krystle on 4/10/14.
//  Copyright (c) 2014 Krystle Kidd. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Line;

@interface TouchDrawView : UIView <UIGestureRecognizerDelegate>{
    NSMutableArray *completeLines;
    NSMutableDictionary *linesInProcess;
    UIPanGestureRecognizer *moveRecognizer;
    UITapGestureRecognizer *tapRecognizer;
    
}
-(void)clearAll;
-(void)endTouches:(NSSet *)touches;

@property (nonatomic, weak)Line *selectedLine;
-(Line *)lineAtPoint:(CGPoint)p;


@end
