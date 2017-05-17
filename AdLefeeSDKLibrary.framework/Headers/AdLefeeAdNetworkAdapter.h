//
//  AdLefeeAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeAdNetworkConfig;

#define TimeOut 8

@interface AdLefeeAdNetworkAdapter : NSObject
- (void)loadAd;
- (void)stopBeingDelegate;
- (void)stopAd;
- (BOOL)isSupportLocation;

@end
