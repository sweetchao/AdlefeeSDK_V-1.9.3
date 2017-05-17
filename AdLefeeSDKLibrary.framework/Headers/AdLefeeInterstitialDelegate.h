//
//  AdLefeeInterstitialDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class AdLefeeInterstitial;
@protocol AdLefeeInterstitialDelegate <NSObject>

- (UIViewController *)adLefeeInterstitialAdViewControllerForPresentingModalView;
- (void)adlefeeInterstitialLoadSuccess:(AdLefeeInterstitial *)interstitial;
- (void)adlefeeInterstitialLoadAdFail:(NSError *)error;
- (void)adlefeeInterstitialClick:(AdLefeeInterstitial *)interstitial;
- (void)adlefeeInterstitialWillAppear:(AdLefeeInterstitial *)interstitial;
- (void)adlefeeInterstitialDidAppear:(AdLefeeInterstitial *)interstitial;
- (void)adlefeeInterstitialWillDisappear:(AdLefeeInterstitial *)interstitial;
- (void)adlefeeInterstitialDidDisappear:(AdLefeeInterstitial *)interstitial;
@end
