/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, SNSystemServiceResourceCoordinator, NSString;

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	SNSystemServiceResourceCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)launchAsMachServiceWithName:(id)arg1 ;
+(id)launchWithResourceCoordinator:(id)arg1 onXPCListener:(id)arg2 ;
+(id)launchDefaultServer;
-(void)start;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithResourceCoordinator:(id)arg1 onListener:(id)arg2 ;
-(id)connectLocally;
@end
