/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileProviderEnumerationObserver.h>

@class NSMutableArray, NSData, NSString;

@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver> {

	NSMutableArray* _items;
	/*^block*/id _completionHandler;
	NSData* _lastPage;

}

@property (retain) NSMutableArray * items;                          //@synthesize items=_items - In the implementation block
@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain,readonly) NSData * lastPage;                      //@synthesize lastPage=_lastPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)lastPage;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMutableArray *)items;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(void)didEnumerateItems:(id)arg1 ;
-(void)finishEnumeratingUpToPage:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

