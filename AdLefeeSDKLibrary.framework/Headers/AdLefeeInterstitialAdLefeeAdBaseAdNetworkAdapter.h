//
//  AdLefeeInterstitialAdLefeeAdBaseAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeInterstitialAdNetworkAdapter.h"

@interface AdLefeeInterstitialAdLefeeAdBaseAdNetworkAdapter : AdLefeeInterstitialAdNetworkAdapter
-(instancetype)initWithAdLefeeSplashDelegate:(id<AdLefeeInterstitialDelegate>)delegate spalsh:(AdLefeeInterstitial *)interstitial withBroswerDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate networkConfig:(AdLefeeAdNetworkConfig *)netConf;
- (void)loadAd;
- (void)presentAd;
- (void)stopBeingDelegate;
- (void)stopTimer;
- (void)loadAdTimeOut:(NSTimer*)theTimer;
- (void)stopAd;
- (void)setRotationID:(NSString *)rotationid;
- (void)setSidID:(NSString *)sid;
-(void)rotationLoadSuccess;
-(void)rotationLoadFail;
-(void)rotationPresentAd;
-(void)rotationClick;

@end
