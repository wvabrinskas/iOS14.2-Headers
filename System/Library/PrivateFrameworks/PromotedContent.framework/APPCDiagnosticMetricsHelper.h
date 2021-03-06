/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/APPCDiagnosticMetricsHelping.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister> {

	 contextIdentifier;
	 promotedContentIdentifier;
	 primitiveCreator;
	 notificationOwner;

}
-(id)init;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(void)loadFailedWithReason:(id)arg1 code:(long long)arg2 ;
-(void)templateMetricWithName:(id)arg1 argument:(id)arg2 ;
-(void)mediaPlaybackFailedWithReason:(id)arg1 ;
-(id)initWithContextIdentifier:(id)arg1 promotedContentIdentifier:(id)arg2 primitiveCreator:(id)arg3 notificationOwner:(id)arg4 ;
@end

