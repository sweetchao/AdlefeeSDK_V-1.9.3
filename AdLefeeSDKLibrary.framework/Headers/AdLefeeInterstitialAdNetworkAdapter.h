//
//  AdLefeeInterstitialAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeAdNetworkAdapter.h"
#import "AdLefeeInterstitialDelegate.h"
#import "AdLefeeInterstitial.h"
#import "AdLefeeAdNetworkType.h"
#import "AdLefeeBrowserDelegate.h"
@interface AdLefeeInterstitialAdNetworkAdapter : AdLefeeAdNetworkAdapter
@property (nonatomic,assign) BOOL isAPI;
/*
 插屏广告适配器
 */
- (instancetype)initWithAdLefeeSplashDelegate:(id<AdLefeeInterstitialDelegate>)delegate
                                       spalsh:(AdLefeeInterstitial *)interstitial
                          withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate
                                networkConfig:(AdLefeeAdNetworkConfig *)netConf;

- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;

- (void)presentAd;
- (BOOL)isReadyPresentInterstitial;
- (NSDictionary *)key;
- (UIViewController *)viewControllerForPresent;
- (void)adRequestSuccess;
- (void)adRequestFail:(NSError *)error;
- (void)adClick;
- (void)interstitialWillPresent;
- (void)interstitialDidPresent;
- (void)interstitialWillDismiss;
- (void)interstitialDidDismiss;
- (void)interstitialPresentFail:(NSError *)error;;
- (BOOL)testMode;
- (AdLefeeAdNetworkConfig *)getAdapterConfig;

- (void)presentInterstitialAndStopTimer;

- (void)browserWillAppear;
- (void)browserDidAppear;
- (void)browserWillDisappear;
- (void)browserDidDisappear;
-(NSTimeInterval)getReqTimeOut;
@end
