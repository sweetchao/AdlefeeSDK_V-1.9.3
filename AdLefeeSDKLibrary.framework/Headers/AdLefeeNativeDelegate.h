//
//  AdLefeeInterstitialDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/8.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class AdLefeeNative;
@protocol AdLefeeNativeDelegate <NSObject>
- (UIViewController *)adLefeeViewNativeControllerForPresentingModalView;
- (void)adlefeeNativeLoadSuccess:(AdLefeeNative *)native withObjectArray:(NSArray *)objArray;
- (void)adlefeeNativeLoadAdFail:(NSError *)error;

@end
