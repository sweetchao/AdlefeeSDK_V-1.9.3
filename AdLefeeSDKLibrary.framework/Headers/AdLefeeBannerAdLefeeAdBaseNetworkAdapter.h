//
//  AdLefeeBannerAdLefeeAdBaseNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeBannerAdNetworkAdapter.h"

@interface AdLefeeBannerAdLefeeAdBaseNetworkAdapter : AdLefeeBannerAdNetworkAdapter

/*
 横幅广告适配器
 */
- (instancetype)initWithAdLefeeBannerDelegate:(id<AdLefeeBannerViewDelegate>)delegate
                          withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate
                                   bannercore:(AdLefeeBannerManager *)bannercore
                                networkConfig:(AdLefeeAdNetworkConfig *)netConf;
- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;
- (void)setRotationID:(NSString *)rotationid;
- (void)setSidID:(NSString *)sid;
-(void)rotationLoadSuccess:(id)object;
-(void)rotationLoadFail;
-(void)rotationClick;
-(AdLefeeAdType)rolatationAdType;
 //2017 1-7 改变竞价中的点击
-(void)rotationClickinsdk;
@end
