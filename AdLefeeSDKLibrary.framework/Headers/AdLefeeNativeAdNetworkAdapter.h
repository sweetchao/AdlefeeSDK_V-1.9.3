//
//  AdLefeeNativeAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeAdNetworkAdapter.h"
#import "AdLefeeNativeDelegate.h"
#import "AdLefeeNative.h"
#import "AdLefeeAdNetworkType.h"
#import "AdLefeeBrowserDelegate.h"
@class AdLefeeNativeAdInfo;
@interface AdLefeeNativeAdNetworkAdapter : AdLefeeAdNetworkAdapter
@property (nonatomic,assign) BOOL isAPI;

- (instancetype)initWithAdLefeeNativeDelegate:(id<AdLefeeNativeDelegate>)delegate
                                       native:(AdLefeeNative *)native
                          withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate
                                networkConfig:(AdLefeeAdNetworkConfig *)netConf;
- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;
- (void)adRequestSuccess:(NSArray *)objArray;
- (void)adRequestFail:(NSError *)error;
- (BOOL)testMode;
- (NSDictionary *)key;
- (AdLefeeAdNetworkConfig *)getAdapterConfig;
- (UIViewController *)viewControllerForPresent;
//展示广告
-(void)attachAdView:(UIView*)view nativeData:(AdLefeeNativeAdInfo*)info;
//点击广告
-(void)clickAd:(AdLefeeNativeAdInfo*)info;
//是否过期
-(BOOL)isAvailable:(AdLefeeNativeAdInfo * )info;
- (void)browserWillAppear;
- (void)browserDidAppear;
- (void)browserWillDisappear;
- (void)browserDidDisappear;
-(NSTimeInterval)getReqTimeOut;
@end
