//
//  LightSDK.h
//  LightSDK
//
//  Created by LI LIN on 14/10/28.
//  Copyright (c) 2014年 Alphabets. All rights reserved.
//

#import <AFHTTPSessionManager.h>
#import <UIImageView+WebCache.h>
#import <JSONModel.h>

#import "ABConfigManager.h"
#import "ABHelper.h"
#import "ABStorable.h"
#import "ABLogger.h"
#import "NSString+ABUtil.h"
#import "ABEntities.h"

//! Project version number for LightSDK.
FOUNDATION_EXPORT double LightSDKVersionNumber;

//! Project version string for LightSDK.
FOUNDATION_EXPORT const unsigned char LightSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LightSDK/PublicHeader.h>


#ifndef _ABHeader_h
#define _ABHeader_h

#define kNotificationNameNeedsLogin @"NeedsLogin"

#define kHTTPHeaderCookieName       @"Set-Cookie"
#define kHTTPHeaderCsrftokenName    @"csrftoken"

#define kConfigManagerUserID        @"cn.alphabets.userid"
#define kConfigManagerDefaultUserID @"cn.alphabets.defaultuserid"
#define kConfigManagerCookie        @"cn.alphabets.cookie"
#define kConfigManagerCsrfToken     @"cn.alphabets.csrftoken"
#define kConfigManagerServerName    @"ServerAddress"
#define kConfigManagerServerPort    @"ServerPort"

#endif
