/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWInteraction.h>

@protocol SWNavigationManager;
@class NSURL, NSString;

@interface SWURLInteraction : NSObject <SWInteraction> {

	NSURL* _URL;
	id<SWNavigationManager> _navigationManager;

}

@property (nonatomic,readonly) id<SWNavigationManager> navigationManager;              //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)perform;
-(id<SWNavigationManager>)navigationManager;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 navigationManager:(id)arg2 ;
@end

