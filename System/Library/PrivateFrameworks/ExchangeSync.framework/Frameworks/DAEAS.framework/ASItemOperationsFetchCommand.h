/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ASItemOperationsFetchCommand : NSObject {

	NSString* _collectionID;
	NSString* _serverID;
	NSString* _longID;

}
-(id)longID;
-(id)collectionID;
-(id)serverID;
-(id)initWithCollectionID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3 ;
@end

