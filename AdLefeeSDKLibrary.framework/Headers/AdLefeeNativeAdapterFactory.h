//
//  AdLefeeNativeAdapterFactory.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeNativeAdNetworkAdapter;
@class AdLefeeNative;
@protocol AdLefeeNativeDelegate;
@protocol AdLefeeBrowserDelegate;
@interface AdLefeeNativeAdapterFactory : NSObject
- (AdLefeeNativeAdNetworkAdapter *) createSDKNativeAdapterByConfig:(NSDictionary *)dict withdelegate:(id<AdLefeeNativeDelegate>)delegate
                                                           withBrowserDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate       withNative:(AdLefeeNative *)native;
@end
