/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface MBFileSystemSnapshot : NSObject {

	NSString* _name;
	NSString* _uuid;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
-(void)setUuid:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 creationDate:(id)arg3 ;
-(NSString *)name;
-(id)description;
-(NSString *)uuid;
-(NSDate *)creationDate;
-(void)setName:(NSString *)arg1 ;
@end

