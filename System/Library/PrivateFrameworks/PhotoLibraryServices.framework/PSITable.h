/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSITableDelegate;
@interface PSITable : NSObject {

	BOOL _finalizzeWasCalled;
	id<PSITableDelegate> _delegate;

}

@property (__weak,readonly) id<PSITableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)clear;
-(id<PSITableDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 ;
-(void)finalizze;
-(void)dealloc;
@end

