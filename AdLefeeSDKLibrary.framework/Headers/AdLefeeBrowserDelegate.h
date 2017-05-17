//
//  AdLefeeBrowserDelegate.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/25.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AdLefeeBrowserDelegate <NSObject>
/*
 浏览器将要展示
 */
- (void)adLefeeWebBrowserWillAppear;

/*
 浏览器已经展示
 */
- (void)adLefeeWebBrowserDidAppear;

/*
 浏览器将要关闭
 */
- (void)adLefeeWebBrowserWillClosed;

/*
 浏览器已经关闭
 */
- (void)adLefeeWebBrowserDidClosed;
@end
