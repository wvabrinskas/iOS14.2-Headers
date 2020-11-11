/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSCache, NSMutableDictionary, NSObject, NSString;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {

	NSCache* _offeringCache;
	NSMutableDictionary* _lookupItemsByStoreLookupID;
	NSMutableDictionary* _lookupItemsByTokenID;
	unsigned long long _nextTokenID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isCmcEnabled;
+(void)_getIsCMCDisabled:(BOOL*)arg1 disabledReason:(id*)arg2 ;
+(void)setWantsArtwork:(BOOL)arg1 ;
+(id)storeOfferingController;
-(id)init;
-(void)_dumpCache;
-(id)_sanitizedQuery:(id)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_storeAccountsDidChangeNotification:(id)arg1 ;
-(void)_onQueueClearCache;
-(id)completionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)cancelCompletionOfferingLookup:(unsigned long long)arg1 ;
-(void)_onQueueRemoveLookupItem:(id)arg1 ;
-(unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(BOOL*)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1 ;
-(void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1 ;
-(void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3 ;
-(void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3 ;
-(id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1 ;
-(id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2 ;
-(void)dealloc;
@end
