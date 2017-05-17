//
//  AdLefeeNative.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/24.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLefeeNativeDelegate.h"
#import "AdLefeeBrowserDelegate.h"

@class AdLefeeNativeAdInfo;
@class AdLefeeNativeAdNetworkAdapter;
@interface AdLefeeNative : NSObject
@property (nonatomic,weak) id<AdLefeeNativeDelegate> delegate;
@property (nonatomic,weak) id<AdLefeeBrowserDelegate> broswerdelegate;
+ (instancetype)initWithAdid:(NSString *)adid withDelegate:(id<AdLefeeNativeDelegate>) delegate withBroswerDelegate:(id<AdLefeeBrowserDelegate>) broswerDelegate;
-(void)load;
- (void)nativeAdLoadSuccess:(AdLefeeNativeAdNetworkAdapter *)adapter withObjectArray:(NSArray *)objArray;
- (void)nativeAdLoadFail:(AdLefeeNativeAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
-(void)sendImpStatistics:(AdLefeeNativeAdNetworkAdapter *)adapter withShowView:(UIView *)view withInfo:(AdLefeeNativeAdInfo * )info;
-(void)sendClickStatistics:(AdLefeeNativeAdNetworkAdapter *)adapter withInfo:(AdLefeeNativeAdInfo *)info;
@end
