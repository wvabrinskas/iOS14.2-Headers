/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext, CKKSControl, NSString;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;
	CKKSControl* _CKKSControl;
	NSString* _view;

}

@property (readonly) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) CKKSControl * CKKSControl;                         //@synthesize CKKSControl=_CKKSControl - In the implementation block
@property (retain) NSString * view;                                   //@synthesize view=_view - In the implementation block
-(void)start;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(PCSCKKSItemModifyContext *)context;
-(void)syncView;
-(id)initWithItemModifyContext:(id)arg1 ;
-(void)checkTLKStatus;
-(void)setCKKSControl:(CKKSControl *)arg1 ;
-(CKKSControl *)CKKSControl;
-(BOOL)ensureControl;
@end
