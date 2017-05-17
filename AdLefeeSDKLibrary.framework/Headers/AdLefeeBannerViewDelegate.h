//
//  AdLefeeBannerViewDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class AdLefeeBannerView;
@protocol AdLefeeBannerViewDelegate <NSObject>
@required
/*
    返回广告rootViewController
 */
- (UIViewController *)adLefeeViewControllerForPresentingModalView;

@optional

- (void)adLefeeWillReviceAd:(AdLefeeBannerView *)adLefeeView;
/**
 * You can get notified when the user receive the ad
 广告接收成功回调
 */
- (void)adLefeeDidReceiveAd:(AdLefeeBannerView *)adLefeeView;
/**
 * You can get notified when the user failed receive the ad
 广告接收失败回调
 */
- (void)adLefeeDidFailToReceiveAd:(AdLefeeBannerView *)adLefeeView didFailWithError:(NSError *)error;
/**
 * 点击广告回调
 */
- (void)adLefeeClickAd:(AdLefeeBannerView *)adLefeeView;

- (void)adLefeeClose;
@end
