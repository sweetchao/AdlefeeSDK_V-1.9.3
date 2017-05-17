//
//  AdLefeeSplashAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/4.
//  Copyright © 2016年 adlefee. All rights reserved.
//
#import <Foundation/Foundation.h>

#import "AdLefeeAdNetworkAdapter.h"
#import "AdLefeeSplashDelegate.h"
#import "AdLefeeBrowserDelegate.h"

#import "AdLefeeAdNetworkType.h"
@class AdLefeeSplash;
@interface AdLefeeSplashAdNetworkAdapter : AdLefeeAdNetworkAdapter
@property (nonatomic,assign) BOOL isAPI;
/*
 开屏广告适配器
 */
- (instancetype)initWithAdLefeeSplashDelegate:(id<AdLefeeSplashDelegate>)delegate
                              broswerDelegate:(id<AdLefeeBrowserDelegate>)broswerdelegate
                                   spalsh:(AdLefeeSplash *)splash
                                networkConfig:(AdLefeeAdNetworkConfig *)netConf;

- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;
// 横幅适配器是否支持点击回调
- (BOOL)isSupportClickDelegate;
- (NSDictionary *)key;
- (UIViewController *)viewControllerForPresent;
- (UIWindow *)getWindow;
- (void)adFail:(NSError *)error;
- (void)adSuccess;
- (void)adClick;
- (void)splashWillPresent;
- (void)splashDidPresent;
- (void)splashWillDismiss;
- (void)splashDidDismiss;
- (BOOL)testMode;
- (AdLefeeAdNetworkConfig *)getAdapterConfig;
- (CGPoint)codeSplashOrigin;
- (void)browserWillAppear;
- (void)browserDidAppear;
- (void)browserWillDisappear;
- (void)browserDidDisappear;
-(NSTimeInterval)getReqTimeOut;
@end
