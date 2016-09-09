//
//  UIView+Extension.h
//  JWKit
//
//  Created by 薄睿杰 on 16/6/7.
//  Copyright © 2016年 梁家文. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)

@property (nonatomic, assign) CGFloat          x;
@property (nonatomic, assign) CGFloat          y;
@property (nonatomic, assign) CGFloat          centerX;
@property (nonatomic, assign) CGFloat          centerY;
@property (nonatomic, assign) CGFloat          width;
@property (nonatomic, assign) CGFloat          height;
@property (nonatomic, assign) CGSize           size;
@property (nonatomic, assign) CGPoint          origin;

- (void)addSingleTapEvent:(void(^)())event;

-(void)removeAllSubviews;

-(UIViewController *)getController;

@end
