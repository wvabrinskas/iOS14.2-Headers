/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BLTPreviouslySentMessageStore : NSObject {

	NSMutableDictionary* _messageDigests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _saveTimer;
	NSString* _path;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)clear;
-(BOOL)dirty;
-(void)_save;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isEmpty;
-(void)invalidate;
-(void)dealloc;
-(id)initWithMessageStorePath:(id)arg1 ;
-(id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2 ;
-(void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2 ;
-(void)removeDigestForKey:(id)arg1 ;
-(void)_cancelSave;
-(void)_enqueueSave;
@end
