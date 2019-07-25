//
//  UIColor+CEWExtension.h
//  easefin
//
//  Created by andrew on 2017/11/2.
//  Copyright © 2017年 creditease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (CEWExtension)
+ (UIColor *)colorWithHexString:(NSString *)color;
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alphaValue;
+ (UIColor *)randomColor;

@end
