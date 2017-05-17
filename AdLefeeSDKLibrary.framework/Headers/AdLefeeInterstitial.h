//
//  AdLefeeInterstitial.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AdLefeeInterstitialDelegate.h"
#import "AdLefeeBrowserDelegate.h"
@class AdLefeeInterstitialAdNetworkAdapter;

@interface AdLefeeInterstitial : NSObject
@property (nonatomic,weak) id<AdLefeeInterstitialDelegate> delegate;
@property (nonatomic,weak) id<AdLefeeBrowserDelegate> broswerdelegate;
+ (instancetype)initWithAdid:(NSString *)adid withDelegate:(id<AdLefeeInterstitialDelegate>) delegate withBroswerDelegate:(id<AdLefeeBrowserDelegate>) broswerDelegate withStopRefresh:(BOOL)isStopRefresh;
- (void)reqInterstitialAd;
- (void)cancelInterstitialAd;
- (void)stoploadInterstitialAd;

- (void)interstitialAdLoadFail:(AdLefeeInterstitialAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
- (void)interstitialAdLoadSuccess:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdWillPresent:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdDidPresent:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdWillDismiss:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdDidDismiss:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdPresentFail:(AdLefeeInterstitialAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
- (void)interstitialAdTimeout:(AdLefeeInterstitialAdNetworkAdapter *)adapter;
- (void)interstitialAdClick:(AdLefeeInterstitialAdNetworkAdapter *)adapter;

@end
