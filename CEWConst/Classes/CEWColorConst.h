//
//  CEWColorConst.h
//  easefin
//
//  Created by duyu on 2017/10/26.
//  Copyright © 2017年 creditease. All rights reserved.
//

#ifndef CEWColorConst_h
#define CEWColorConst_h

// RGB颜色
#define CEWRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define CEWRGBA(R, G, B, A) [UIColor colorWithRed:(R)/255.f green:(G)/255.f blue:(B)/255.f alpha:(A)]
#define CEWRGB16(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define CEWRGBA16(rgbaValue,alphaValue) [UIColor colorWithRed:((float)((rgbaValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbaValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbaValue & 0xFF))/255.0 alpha:alphaValue]



#define CEWThemeColor CEWRGB16(0x4B7ADF) // 主题颜色(蓝)
#define CEWThemeHighlightColor CEWRGB16(0x355AB8) // 主题按钮按下颜色
#define CEWThemeControllerBackgroundColor CEWRGB16(0xf1f1f1)// 页面背景色(灰)
#define CEWThemeSeparatorDefaultColor CEWRGB16(0xeeeeee) // 分割线颜色(灰)
#define CEWThemeDisableColor CEWRGB16(0xA3C3F7) // 禁用状态背景色(灰)
#define CEWThemeButtonTextColor CEWRGB16(0xffffff) // button文本色(白)
#define CEWThemeButtonDisableTextColor CEWRGB16(0xffffff) // 禁用状态文本色(白)
#define CEWThemeEditTextColor CEWRGB16(0x3c3c3c) // 输入框中文本颜色(黑)
#define CEWThemePlaceHolderTextColor1 CEWRGB16(0x909090) // 输入框站位文本颜色(灰)
#define CEWThemePlaceHolderTextColor2 CEWRGB16(0xc3c3c3) // 输入框站位文本颜色(灰)

#define CEWThemeSubTitleCellTitleColor CEWRGB16(0x333333) // SubtitleCell title颜色
#define CEWThemeSubTitleCellSubTitleColor CEWRGB16(0x909090) // SubtitleCell subtitle颜色
#define CEWThemeAlertActionCancelTitleColor CEWRGB16(0x999999) // 弹框取消按钮颜色
#define CEWThemeAlertContextColor CEWRGB16(0x333333) // 弹框内容颜色

#define CEWThemeMainTitleColor CEWRGB16(0x333333) // 主标题颜色
#endif /* CEWColorConst_h */
