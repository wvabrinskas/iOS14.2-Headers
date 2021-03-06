/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSUIWebProtocolDelegate;
@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler {

	id<AMSUIWebProtocolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSUIWebProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(id<AMSUIWebProtocolDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebProtocolDelegate>)arg1 ;
@end

