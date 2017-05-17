//
//  AdLefeeInterstitialAdapterFactory.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeInterstitialAdNetworkAdapter;
@class AdLefeeInterstitial;
@protocol AdLefeeInterstitialDelegate;
@protocol AdLefeeBrowserDelegate;
@interface AdLefeeInterstitialAdapterFactory : NSObject
/*
 创建SDK Interstitial 适配器
 
 dict:ration信息
 
 delegate:代理实现对象
 
 bannercore:轮换控制对象
 */
- (AdLefeeInterstitialAdNetworkAdapter *) createSDKInterstitialAdapterByConfig:(NSDictionary *)dict withdelegate:(id<AdLefeeInterstitialDelegate>)delegate
                                                 withBrowserDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate       withInterstitial:(AdLefeeInterstitial *)interstitial;
@end
