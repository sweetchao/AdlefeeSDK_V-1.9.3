//
//  AdLefeeAdapterNetworkRegistry.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>
@class  AdLefeeClassWrapper;
@interface AdLefeeAdapterNetworkRegistry : NSObject
- (NSMutableDictionary *)getAdapterDict;
- (void)setAdapterDict:(NSMutableDictionary *)adapterDict;
- (void)registerClass:(Class)adapterClass;
- (AdLefeeClassWrapper *)adapterClassFor:(NSInteger)adNetworkType;
@end
