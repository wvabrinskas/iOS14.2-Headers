/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BLTPingSubscribing.h>

@class NSXPCConnection, NSString;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIDs;
-(id)subscriptionInfos;
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(id)sectionIDsForBulletins;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(void)pingSubscriberDidLoad;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(NSXPCConnection *)connection;
-(void)pingWithBulletin:(id)arg1 ;
-(void)dealloc;
@end

