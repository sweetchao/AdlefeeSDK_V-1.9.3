//
//  AdLefeeBannerAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/1.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLefeeBannerViewDelegate.h"
#import "AdLefeeBannerManager.h"
#import "AdLefeeBrowserDelegate.h"
#import "AdLefeeAdNetworkAdapter.h"
#import "AdLefeeAdNetworkConfig.h"


@interface AdLefeeBannerAdNetworkAdapter : AdLefeeAdNetworkAdapter

@property (nonatomic,assign) BOOL isAPI;
/*
 横幅广告适配器
 */
- (instancetype)initWithAdLefeeBannerDelegate:(id<AdLefeeBannerViewDelegate>)delegate
                withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate
                         bannercore:(AdLefeeBannerManager *)bannercore
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
- (void)adFail:(NSError *)error;
- (void)adSuccesswithView:(UIView *)adView;
- (void)adClick;
- (void)browserWillAppear;
- (void)browserDidAppear;
- (void)browserWillDisappear;
- (void)browserDidDisappear;
- (BOOL)testMode;
- (AdLefeeAdNetworkConfig *)getAdapterConfig;
- (AdLefeeAdType)getBannerUserRequestType;
-(NSTimeInterval)getReqTimeOut;
@end

