//
//  AdLefeeNative.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/24.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLefeeBookNativeDelegate.h"
#import "AdLefeeBrowserDelegate.h"
@class AdLefeeNativeAdInfo;
@class AdLefeeBookNativeAdNetworkAdapter;
@interface AdLefeeBookNative : NSObject
@property (nonatomic,weak) id<AdLefeeBookNativeDelegate> delegate;
@property (nonatomic,weak) id<AdLefeeBrowserDelegate> broswerdelegate;
+ (instancetype)initWithAdid:(NSString *)adid withDelegate:(id<AdLefeeBookNativeDelegate>) delegate withBroswerDelegate:(id<AdLefeeBrowserDelegate>) broswerDelegate;
-(void)loadWithSize:(CGSize)size;
-(void)attachAdView:(UIView*)view;
-(BOOL)isAvailable;

- (void)nativeAdLoadSuccess:(AdLefeeBookNativeAdNetworkAdapter *)adapter withObjectView:(UIView *)objView;
- (void)nativeAdLoadFail:(AdLefeeBookNativeAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
-(void)sendImpStatistics:(AdLefeeBookNativeAdNetworkAdapter *)adapter withShowView:(UIView *)view;
-(void)sendClickStatistics:(AdLefeeBookNativeAdNetworkAdapter *)adapter;
@end
