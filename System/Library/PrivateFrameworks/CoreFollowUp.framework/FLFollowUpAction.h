/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface FLFollowUpAction : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _label;
	NSURL* _url;
	NSDictionary* _userInfo;
	NSURL* _launchActionURL;
	NSData* _launchActionArguments;
	unsigned long long _eventSource;
	unsigned long long _sqlID;

}

@property (assign,nonatomic) unsigned long long eventSource;              //@synthesize eventSource=_eventSource - In the implementation block
@property (assign,nonatomic) unsigned long long sqlID;                    //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,retain) NSData * _userInfoData; 
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (copy) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (copy) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSURL * launchActionURL;                                 //@synthesize launchActionURL=_launchActionURL - In the implementation block
@property (nonatomic,copy) NSData * launchActionArguments;                //@synthesize launchActionArguments=_launchActionArguments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithLabel:(id)arg1 url:(id)arg2 ;
-(NSString *)label;
-(NSDictionary *)userInfo;
-(unsigned long long)eventSource;
-(void)setEventSource:(unsigned long long)arg1 ;
-(unsigned long long)sqlID;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(void)setUrl:(NSURL *)arg1 ;
-(id)description;
-(NSData *)_userInfoData;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)set_userInfoData:(NSData *)arg1 ;
-(void)setSqlID:(unsigned long long)arg1 ;
-(BOOL)_loadActionURL;
-(id)initWithLabel:(id)arg1 url:(id)arg2 ;
-(NSURL *)launchActionURL;
-(NSData *)launchActionArguments;
-(void)setLaunchActionURL:(NSURL *)arg1 ;
-(void)setLaunchActionArguments:(NSData *)arg1 ;
@end
