//
//  AdLefeeInterstitialDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class AdLefeeBookNative;
@protocol AdLefeeBookNativeDelegate <NSObject>
@required
/*
 返回广告rootViewController
 */
- (UIViewController *)adLefeeViewNativeControllerForPresentingModalView;
@optional
- (void)adlefeeNativeLoadSuccess:(AdLefeeBookNative *)native withObjectView:(UIView *)objView;
- (void)adlefeeNativeLoadAdFail:(NSError *)error;
-(void)adlefeeNativeClick;

@end
