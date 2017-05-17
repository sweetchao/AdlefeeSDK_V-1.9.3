//
//  AdLefeeNativeAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeAdNetworkAdapter.h"
#import "AdLefeeBookNativeDelegate.h"
#import "AdLefeeBookNative.h"
#import "AdLefeeAdNetworkType.h"
#import "AdLefeeBrowserDelegate.h"
@class AdLefeeNativeAdInfo;
@interface AdLefeeBookNativeAdNetworkAdapter : AdLefeeAdNetworkAdapter
@property (nonatomic,assign) BOOL isAPI;

- (instancetype)initWithAdLefeeNativeDelegate:(id<AdLefeeBookNativeDelegate>)delegate
                                       native:(AdLefeeBookNative *)native
                          withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate
                                networkConfig:(AdLefeeAdNetworkConfig *)netConf;
- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;
- (void)adRequestSuccess:(UIView *)objView;
- (void)adRequestFail:(NSError *)error;
- (BOOL)testMode;
- (NSDictionary *)key;
- (AdLefeeAdNetworkConfig *)getAdapterConfig;
- (UIViewController *)viewControllerForPresent;

//展示广告
-(void)attachAdView:(UIView*)view;
//点击广告
-(void)clickAd;
//是否过期
-(BOOL)isAvailable;
-(NSTimeInterval)getReqTimeOut;
@end
