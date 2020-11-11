/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface cBEET4QRedIfcDrp : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	unsigned long long _source;
	unsigned long long _type;

}

@property (nonatomic,retain) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * fullName;                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(NSString *)firstName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)fullName;
-(id)initWithSource:(unsigned long long)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)lastName;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 source:(unsigned long long)arg2 ;
-(id)initWithFullName:(id)arg1 source:(unsigned long long)arg2 ;
-(unsigned long long)source;
-(unsigned long long)type;
-(NSString *)emailAddress;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 source:(unsigned long long)arg3 ;
-(id)initWithEmailAddress:(id)arg1 source:(unsigned long long)arg2 ;
@end
