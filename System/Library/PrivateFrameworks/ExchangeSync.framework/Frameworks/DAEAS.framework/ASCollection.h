/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSArray, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {

	long long _dataclass;
	NSString* _syncKey;
	NSString* _collectionId;
	NSNumber* _status;
	NSNumber* _moreAvailable;
	NSArray* _changedItems;
	NSArray* _responseItems;
	ASFolderItemsSyncResponse* _parentResponse;
	int _sniffableType;
	BOOL _checkedShouldSniffInvites;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)status;
-(long long)dataclass;
-(id)syncKey;
-(void)setSyncKey:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(id)description;
-(id)moreAvailable;
-(id)changedItems;
-(void)setCollectionId:(id)arg1 ;
-(id)collectionId;
-(id)responseItems;
-(void)setMoreAvailable:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setResponseItems:(id)arg1 ;
-(void)setDataclassString:(id)arg1 ;
-(void)setChangedItems:(id)arg1 ;
-(void)setParentResponse:(id)arg1 ;
-(int)sniffableTypeForAccount:(id)arg1 ;
@end

