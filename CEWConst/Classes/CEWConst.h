//
//  CEWConst.h
//  easefin
//
//  Created by duyu on 2017/9/5.
//  Copyright © 2017年 creditease. All rights reserved.
//

#import "CEWColorConst.h"
#import "CEWFontConst.h"
#import "UIColor+CEWExtension.h"

// 日志

#ifndef RELEASE
#define CEWDebugLog(format, ...) printf("[fileName: %s] %s [Line: %d] :%s\n", [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ##__VA_ARGS__] UTF8String]);
#else
#define CEWDebugLog(...);
#endif

// 屏幕尺寸
#define CEWScreenBounds [UIScreen mainScreen].bounds
#define CEWScreenSize [UIScreen mainScreen].bounds.size
#define CEWScreenWidth [UIScreen mainScreen].bounds.size.width
#define CEWScreenHeight [UIScreen mainScreen].bounds.size.height

// 设备类型
#define CEWDeviceIPhone4 (CEWScreenHeight <= 480.0)   //包括iPhone4 , iPhone4s
#define CEWDeviceIPhone5 ((CEWScreenHeight > 480.0) && (CEWScreenHeight <= 568.0))   //包括iPhone5,iPhone5s
#define CEWDeviceIPhone6 ((CEWScreenHeight > 568.0) && (CEWScreenHeight <= 667.0))   //iPhone6
#define CEWDeviceIPhone6Plus ((CEWScreenHeight > 667.0) && (CEWScreenHeight <= 736.0))   //iPhone6Plus
#define CEWDeviceIPhoneX ((CEWScreenHeight > 736.0) && (CEWScreenHeight <= 812.0)) // iphoneX
#define CEWIsBluntBangs (safeAreaInsets().bottom > 0)  //是否是齐刘海

// 状态栏高度
#define CEWStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define CEWNavigationBarBottom (CEWStatusBarHeight + 44)
#define CEWBottomMargin safeAreaInsets().bottom

#define CEWDeviceScale(height) ((CEWDeviceIPhone4 ? 0.5 : 1) * (height))

// 相对iPhone6高度
CG_INLINE CGFloat CEWScaledHeightFor1334(CGFloat height) {
    static float scale = 1.0;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (CEWDeviceIPhoneX) {
            scale = 1.5;
        } else if (CEWDeviceIPhone5) {
            scale = 0.6;
        }
    });
    return height * scale;
}

//安全区域缩进
CG_INLINE UIEdgeInsets safeAreaInsets(void) {
    UIEdgeInsets safeAreaInsets = UIEdgeInsetsZero;
    if (@available(iOS 11.0, *)) {
        safeAreaInsets = [[[[UIApplication sharedApplication] delegate]window]safeAreaInsets];
        
    }
    return safeAreaInsets;
}

//self弱引用
#define CEWWS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

//*** IS Empty **
#define CEWIsEmptyString(s) (s == nil || [s isKindOfClass:[NSNull class]] || ([s isKindOfClass:[NSString class]] && s.length == 0)||[s isEqual:[NSNull null]])

#define CEWIsNull(obj) ([obj isKindOfClass:[NSNull class]])
// 是否是无效字典
#define CEWIsInvalidDict(objDict) (objDict == nil || ![objDict isKindOfClass:[NSDictionary class]])
// 是否是无效数组
#define CEWIsInvalidArray(objArray) (objArray == nil || ![objArray isKindOfClass:[NSArray class]])

#define CEWAPP_DELEGATE ((AppDelegate *)[[UIApplication sharedApplication] delegate])
