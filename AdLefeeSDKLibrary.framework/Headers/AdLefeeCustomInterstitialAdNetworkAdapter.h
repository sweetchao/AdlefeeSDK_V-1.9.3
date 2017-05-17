//
//  AdLefeeCustomInterstitialAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by mac on 16/5/22.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeInterstitialAdNetworkAdapter.h"

@interface AdLefeeCustomInterstitialAdNetworkAdapter : AdLefeeInterstitialAdNetworkAdapter
#pragma mark custom overwrite method

+ (AdLefeeAdNetworkType)networkType;
-(void)loadAd;
- (void)presentAd;
- (BOOL)isReadyPresentInterstitial;
#pragma mark custom use method
+(void)registerClass:(id)clazz;
- (NSDictionary *)key;

-(void)adLefeeInterstitialLoadSuccessCustom:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter ;
-(void)adLefeeInterstitialCustom:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter didFailAd:(NSError *)error;
-(void)adLefeeInterstitialCustomClick:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter;
-(void)adLefeeInterstitialCustomwillShow:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter;
-(void)adLefeeInterstitialCustomDidShow:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter;
-(void)adLefeeInterstitialCustomwillDismiss:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter;
-(void)adLefeeInterstitialCustomDidDismiss:(AdLefeeCustomInterstitialAdNetworkAdapter *)adapter;

@end
