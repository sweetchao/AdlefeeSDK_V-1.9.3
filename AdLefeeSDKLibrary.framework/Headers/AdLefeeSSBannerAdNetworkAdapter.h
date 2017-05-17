//
//  AdLefeeSSBannerAdNetworkAdapter.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/5/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import "AdLefeeBannerAdLefeeAdBaseNetworkAdapter.h"

@interface AdLefeeSSBannerAdNetworkAdapter : AdLefeeBannerAdLefeeAdBaseNetworkAdapter
+ (AdLefeeAdNetworkType)networkType;
-(void)rotationLoadSuccess:(id)object;
-(void)rotationLoadFail;
-(void)rotationClick;

@end
