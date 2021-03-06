/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLPersistentHistoryTransactionModifiers : NSObject {

	BOOL _syncChangeMarker;
	int _changeSource;

}

@property (assign,nonatomic) BOOL syncChangeMarker;              //@synthesize syncChangeMarker=_syncChangeMarker - In the implementation block
@property (assign,nonatomic) int changeSource;                   //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL isSyncable; 
+(id)transactionModifiersFromTransactionAuthor:(id)arg1 ;
+(id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)init;
-(BOOL)isSyncable;
-(BOOL)syncChangeMarker;
-(id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)encodeAsTransactionAuthor;
-(BOOL)updateFromTransactionAuthor:(id)arg1 ;
-(id)_descriptionWithBuilder:(id)arg1 ;
-(void)setSyncChangeMarker:(BOOL)arg1 ;
-(id)description;
-(int)changeSource;
-(void)setChangeSource:(int)arg1 ;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
@end

