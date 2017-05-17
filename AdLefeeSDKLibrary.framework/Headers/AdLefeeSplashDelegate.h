//
//  AdLefeeSplashDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/4.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class AdLefeeSplash;
@protocol AdLefeeSplashDelegate <NSObject>

- (UIViewController *)adLefeeSplashAdViewControllerForPresentingModalView;
- (UIWindow *)getSplashShowWindow;

- (UIImage *)backgroundImage;

- (void)adLefeeSplashAdAllAdFail:(AdLefeeSplash *)splashAd withError:(NSError *)err;

- (void)adLefeeSplashAdWillPresent:(AdLefeeSplash *)splashAd;

- (void)adLefeeSplashAdDidPresent:(AdLefeeSplash *)splashAd;

- (void)adLefeeSplashAdWillDismiss:(AdLefeeSplash *)splashAd;

- (void)adLefeeSplashAdDidDismiss:(AdLefeeSplash *)splashAd;
/*
 设置自售 交换 自动优化的广告位置
 // 如果不实现此回调 默认展示位置为（0.0 ， 0.0）
 */
- (CGPoint)adLefeeSplashAdOrigin;


@end
