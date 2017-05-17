//
//  AdLefeeCustomSplashAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by mac on 16/5/22.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeSplashAdNetworkAdapter.h"
#import "AdLefeeAdType.h"
@interface AdLefeeCustomSplashAdNetworkAdapter : AdLefeeSplashAdNetworkAdapter
@property (nonatomic,assign) BOOL isStop;
#pragma mark custom overwrite method
+ (AdLefeeAdNetworkType)networkType;
-(void)loadAd;
#pragma mark custom use method
+(void)registerClass:(id)clazz;
- (NSDictionary *)key;

-(void)adLefeeSplashCustom:(AdLefeeCustomSplashAdNetworkAdapter *)adapter didReceiveAdView:(UIView *)adView;
-(void)adLefeeSplashCustom:(AdLefeeCustomSplashAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
-(void)adLefeeSplashCustomClick:(AdLefeeCustomSplashAdNetworkAdapter *)adapter;
-(void)adLefeeSplashDismiss:(AdLefeeCustomSplashAdNetworkAdapter *)adapter;
@end
