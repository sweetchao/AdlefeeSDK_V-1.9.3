//
//  AdLefeeNativeAdLefeeAdBaseAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeBookNativeAdNetworkAdapter.h"

@interface AdLefeeBookNativeAdLefeeAdBaseAdNetworkAdapter : AdLefeeBookNativeAdNetworkAdapter
- (void)loadAd:(NSArray * )nativeArray;
- (void)setRotationID:(NSString *)rotationid;
- (void)setSidID:(NSString *)sid;
-(void)attachAdView:(UIView*)view;
-(void)adLefeeLoadSuccess:(UIView* )view;
-(void)adLefeeLoadError:(NSError* )error;

@end
