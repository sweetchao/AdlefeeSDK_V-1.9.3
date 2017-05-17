//
//  AdLefeeBannerView.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdLefeeAdType.h"
#import "AdLefeeBrowserDelegate.h"
#import "AdLefeeBannerViewDelegate.h"
typedef enum : NSUInteger {
    AdLefeeBannerTopMiddle=1,
    AdLefeeBannerMiddleMiddle=2,
    AdLefeeBannerMiddleBottom=3,
    AdLefeeBannerLeftTop=4,
    AdLefeeBannerLeftMiddle=5,
    AdLefeeBannerLeftBottom=6,
    AdLefeeBannerRightTop=7,
    AdLefeeBannerRightMiddle=8,
    AdLefeeBannerRightBottom=9,
    AdLefeeBannerCustomer = 100
} AdLefeeBannerMiddlePosition;


@interface AdLefeeBannerView : UIView
@property (nonatomic,weak) id<AdLefeeBannerViewDelegate> delegate;

/*
 ak:开发appkey
 type:请求广告类型
 delegate:代理对象
 AdPointType:广告位置
 自动轮换
 */
-(instancetype)initWithFrame:(CGRect)frame Withadid:(NSString *)adid adType:(AdLefeeAdType)type adLefeeViewDelegate:(id<AdLefeeBannerViewDelegate>)delegate adLefeeBroswerDelegate:(id<AdLefeeBrowserDelegate>)broswerDelegate withStopRefresh:(BOOL)isStopRefresh;
// 广告居中
- (void)setAdLefeeBannerPosition:(AdLefeeBannerMiddlePosition)bannerposition;
- (void)destoryBanner;
@end
