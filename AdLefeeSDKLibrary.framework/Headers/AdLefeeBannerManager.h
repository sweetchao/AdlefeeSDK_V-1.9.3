//
//  AdLefeeBannerManager.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLefeeAdType.h"
#import "AdLefeeBrowserDelegate.h"
#import "AdLefeeBannerViewDelegate.h"
@class AdLefeeBannerAdNetworkAdapter;
typedef enum : NSUInteger {
    AdLefeeBannerManagerLoadInit=1,
    AdLefeeBannerManagerLoadGetConfig=2,
    AdLefeeBannerManagerLoadRequesting=3,
    AdLefeeBannerManagerLoadPause=4,
    AdLefeeBannerManagerLoadDisplay = 5,
} AdLefeeBannerManagerStatus;

@class AdLefeeBannerView;
@interface AdLefeeBannerManager : NSObject
@property (nonatomic,strong) AdLefeeBannerAdNetworkAdapter *adapter;
- (instancetype)initWithBannerView:(AdLefeeBannerView *)view withAdid:(NSString *)adid adType:(AdLefeeAdType)type adLefeeViewDelegate:(id<AdLefeeBannerViewDelegate>)delegate adLefeeBroswerDelegate:(id<AdLefeeBrowserDelegate>)broswerDelegate withStopRefresh:(BOOL)isStopRefresh;
- (void)requestAd;
- (void)pauseloadAd;
- (void)continueloadAd;
- (void)destoryAd;
- (void)adapter:(AdLefeeBannerAdNetworkAdapter *)adapter didGetAd:(NSString *)adType;

- (void)adapter:(AdLefeeBannerAdNetworkAdapter *)adapter didReceiveAdView:(UIView *)view;

- (void)adapter:(AdLefeeBannerAdNetworkAdapter *)adapter didReceiveAdView:(UIView *)view waitUntilDone:(BOOL)isWait;

- (void)adapter:(AdLefeeBannerAdNetworkAdapter *)adapter didFailAd:(NSError *)error ;
/*
 第三方SDK点击回调
 SDK中提供点击回调可以调用这个方法 向乐飞聚合发送点击统计
 */
- (void)adapterClick:(AdLefeeBannerAdNetworkAdapter *)sdkAdapter;
- (AdLefeeBannerManagerStatus)getAdLefeeManagerStatus;
- (AdLefeeAdType)getUserRequestBannerType;

- (void)adlefeepreclickhiddeclose:(BOOL)ishidden;
@end
