//
//  AdLefeeNativeAdapterFactory.h
//  AdLefeeLibrary
//
//  Created by sweetchao on 16/8/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AdLefeeBookNativeAdNetworkAdapter;
@class AdLefeeBookNative;
@protocol AdLefeeBookNativeDelegate;
@protocol AdLefeeBrowserDelegate;
@interface AdLefeeBookNativeAdapterFactory : NSObject
- (AdLefeeBookNativeAdNetworkAdapter *) createSDKNativeAdapterByConfig:(NSDictionary *)dict withdelegate:(id<AdLefeeBookNativeDelegate>)delegate
                                               withBrowserDelegate:(id<AdLefeeBrowserDelegate>)browserDelegate       withNative:(AdLefeeBookNative *)native withNativeTypeSize:(NSString *)typeSize;
@end
