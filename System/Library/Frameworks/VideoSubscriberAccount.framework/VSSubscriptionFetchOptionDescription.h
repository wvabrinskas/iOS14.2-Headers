/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying> {

	BOOL _container;
	NSString* _key;
	id _defaultValue;
	unsigned long long _minCount;
	Class _allowedClass;
	NSPredicate* _allowedValuePredicate;

}

@property (nonatomic,copy) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id defaultValue;                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,getter=isContainer,nonatomic) BOOL container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long minCount;                    //@synthesize minCount=_minCount - In the implementation block
@property (nonatomic,retain) Class allowedClass;                             //@synthesize allowedClass=_allowedClass - In the implementation block
@property (nonatomic,copy) NSPredicate * allowedValuePredicate;              //@synthesize allowedValuePredicate=_allowedValuePredicate - In the implementation block
-(NSString *)key;
-(void)setDefaultValue:(id)arg1 ;
-(id)init;
-(void)setKey:(NSString *)arg1 ;
-(id)defaultValue;
-(void)setContainer:(BOOL)arg1 ;
-(unsigned long long)minCount;
-(BOOL)isContainer;
-(void)setMinCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)allowedClass;
-(void)setAllowedClass:(Class)arg1 ;
-(NSPredicate *)allowedValuePredicate;
-(void)setAllowedValuePredicate:(NSPredicate *)arg1 ;
@end
