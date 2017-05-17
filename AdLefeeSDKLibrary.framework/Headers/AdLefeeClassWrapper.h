//
//  AdLefeeClassWrapper.h
//  AdLefeeLibrary
//
//  Created by AdLefee on 16/4/18.
//  Copyright © 2016年 adlefee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AdLefeeClassWrapper : NSObject
- (id)initWithClass:(Class)c;
@property (nonatomic, readonly,weak) Class theClass;

@end
