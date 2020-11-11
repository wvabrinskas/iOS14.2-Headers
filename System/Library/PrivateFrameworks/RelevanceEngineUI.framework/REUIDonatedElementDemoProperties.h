/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class NSString, INIntent, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {

	NSString* _demoBundleIdentifier;
	INIntent* _demoIntent;
	NSString* _demoAppName;
	UIImage* _demoAppIcon;

}
+(id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4 ;
-(id)appName;
-(id)intent;
-(id)bundleIdentifier;
-(id)appIcon;
@end
