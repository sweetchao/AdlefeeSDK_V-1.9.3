//
//  AdLefeeAdapterCustomAdapter.h
//  AdLefeeLibrary
//
//  Created by mac on 16/5/22.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeBannerAdNetworkAdapter.h"
#import "AdLefeeAdType.h"
@interface AdLefeeAdapterCustomAdapter : AdLefeeBannerAdNetworkAdapter
@property (nonatomic,assign) BOOL isStop;
#pragma mark custom overwrite method
+ (AdLefeeAdNetworkType)networkType;
-(void)loadAd;
#pragma mark custom use method
+(void)registerClass:(id)clazz;
-(AdLefeeAdType)customAdapterWillgetAdAndGetAdViewType;
- (NSDictionary *)key;

-(void)adLefeeBannerCustom:(AdLefeeAdapterCustomAdapter *)adapter didReceiveAdView:(UIView *)adView;
-(void)adLefeeBannerCustom:(AdLefeeAdapterCustomAdapter *)adapter didFailAd:(NSError *)error;
-(void)adlefeeBannerCustomClick:(AdLefeeAdapterCustomAdapter *)adapter;
@end
