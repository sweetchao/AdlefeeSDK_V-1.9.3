//
//  AdLefeeSplash.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/4.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeSplashAdNetworkAdapter;
@protocol AdLefeeSplashDelegate;
@protocol AdLefeeBrowserDelegate;
@interface AdLefeeSplash : NSObject

- (instancetype)initWithSplashAdid:(NSString *)adid adLefeSplashDelegate:(id<AdLefeeSplashDelegate>)delegate adLefeeBroswerDelegate:(id<AdLefeeBrowserDelegate>)broswerdelegate withshowView:(UIView *)showView;

- (void)requestSplashAd;


- (void)adapterDidSuccess:(AdLefeeSplashAdNetworkAdapter *)adapter;


- (void)adapter:(AdLefeeSplashAdNetworkAdapter *)adapter didFailAd:(NSError *)error ;

- (void)adapterClick:(AdLefeeSplashAdNetworkAdapter *)sdkAdapter;

- (void)adapter:(AdLefeeSplashAdNetworkAdapter *)adapter WillPresent:(id)splashAd;

- (void)adapter:(AdLefeeSplashAdNetworkAdapter *)adapter DidPresent:(id)splashAd;

- (void)adapter:(AdLefeeSplashAdNetworkAdapter *)adapter WillDismiss:(id)splashAd;

- (void)adapter:(AdLefeeSplashAdNetworkAdapter *)adapter didDismiss:(id)splashAd;

@end
