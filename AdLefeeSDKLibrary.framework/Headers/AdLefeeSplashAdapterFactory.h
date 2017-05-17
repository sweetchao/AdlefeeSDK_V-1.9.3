//
//  AdLefeeSplashAdapterFactory.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/4.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeSplashAdNetworkAdapter;
@class AdLefeeSplash;
@protocol AdLefeeSplashDelegate;
@protocol AdLefeeBrowserDelegate;
@interface AdLefeeSplashAdapterFactory : NSObject
/*
 创建SDK Splash 适配器
 
 dict:ration信息
 
 delegate:代理实现对象
 
 bannercore:轮换控制对象
 */
- (AdLefeeSplashAdNetworkAdapter *) createSDKSplashAdapterByConfig:(NSDictionary *)dict withdelegate:(id<AdLefeeSplashDelegate>)delegate  withBrowserDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate withSplash:(AdLefeeSplash *)splash;
@end
