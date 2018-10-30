//
//  MBMVC.h
//  MBMVC
//
//  Created by xulingjiao on 2017/7/26.
//  Copyright © 2017年 Kuaibao. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MBMVC.
FOUNDATION_EXPORT double MBMVCVersionNumber;

//! Project version string for MBMVC.
FOUNDATION_EXPORT const unsigned char MBMVCVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MBMVC/PublicHeader.h>

//Bindable
#import <MBMVC/TBMBBind.h>
//Default
#import <MBMVC/TBMBDefaultCommandInvocation.h>
#import <MBMVC/TBMBDefaultFacade.h>
#import <MBMVC/TBMBDefaultMediator.h>
#import <MBMVC/TBMBDefaultMessageReceiver.h>
#import <MBMVC/TBMBDefaultNotification.h>
#import <MBMVC/TBMBDefaultPage.h>
#import <MBMVC/TBMBDefaultRootViewController.h>
#import <MBMVC/TBMBSimpleInstanceCommand.h>
#import <MBMVC/TBMBSimpleSingletonCommand.h>
#import <MBMVC/TBMBSimpleStaticCommand.h>
//Facade
#import <MBMVC/TBMBGlobalFacade.h>
//Protocol
#import <MBMVC/TBMBCommand.h>
#import <MBMVC/TBMBCommandInterceptor.h>
#import <MBMVC/TBMBCommandInvocation.h>
#import <MBMVC/TBMBFacade.h>
#import <MBMVC/TBMBInstanceCommand.h>
#import <MBMVC/TBMBMessageReceiver.h>
#import <MBMVC/TBMBMessageSender.h>
#import <MBMVC/TBMBNotification.h>
#import <MBMVC/TBMBOnlyProxy.h>
#import <MBMVC/TBMBPage.h>
#import <MBMVC/TBMBSingletonCommand.h>
#import <MBMVC/TBMBStaticCommand.h>
//Proxy
#import <MBMVC/TBMBDefaultMediator+TBMBProxy.h>
#import <MBMVC/TBMBDefaultMessageReceiver+TBMBProxy.h>
#import <MBMVC/TBMBDefaultRootViewController+TBMBProxy.h>
#import <MBMVC/TBMBMessageProxy.h>
#import <MBMVC/TBMBSimpleInstanceCommand+TBMBProxy.h>
#import <MBMVC/TBMBSimpleStaticCommand+TBMBProxy.h>
//Util
#import <MBMVC/TBMBUtil.h>


