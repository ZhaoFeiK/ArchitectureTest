//
//  RequestAccessory.h
//  ArchitectureTest
//
//  Created by zhaofei on 2017/4/9.
//  Copyright © 2017年 zbull. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTKBaseRequest.h"

@interface RequestAccessory : NSObject <YTKRequestAccessory>

/**
 创建 请求的附件, 用来指示网络正在请求 HUD, NetworkActivityIndicator

 @param isNeedDisplayHUD 是否展示HUD, 
 @return RequestAccessory
 */
+ (instancetype)createRequestAccessoryWithNeedDisplayHUD: (BOOL)isNeedDisplayHUD;
@end
